#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long


ll ex_Euclid(ll a,ll b){
	ll q,r,x0,x1,x2,y0,y1,y2;
	x0=1;y0=0;
	x1=0;y1=1;
	while(b>0){
		r=a%b;
		q=a/b;
		x2=x0-x1*q;
		y2=y0-y1*q;
		a=b;b=r;
		x0=x1;x1=x2;
		y0=y1;y1=y2;
	}
	return y0;
}

ll comb(ll N,ll k,ll mod){
	ll i,j;
	vector<ll> fact(N+1);
	fact[0]=1;
	for(i=1;i<=N;i++){
		fact[i]=(fact[i-1]*i)%mod;
	}
	vector<ll> invfact(N+1);
	invfact[N]=ex_Euclid(mod,fact[N])%mod;
	for(i=1;i<=N;i++){
		invfact[N-i]=invfact[N-i+1]*(N-i+1)%mod;
	}
	return fact[N]*invfact[N-k]%mod*invfact[k]%mod;
}


int main(){
	ll MOD=1000000007;
	ll X,Y;
	cin >> X >> Y;
	if(X<Y)swap(X,Y);
	if((X+Y)%3==0 && X<=2*Y){
		cout << comb((X+Y)/3,(2*Y-X)/3,MOD)<<endl;
	}else{
		cout << 0;
	}
    return 0;
}

