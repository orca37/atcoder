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

//gcd(a,b)が1前提のしか作ってない
ll modpow(ll a,ll n,ll mod){
	ll ans=1;
	for(;n>0;n>>=1;a=a * a %mod){
		if(n%2==1){
			ans = ans * a % mod;
		}
	}

	return ans;
}


int main(){
	ll MOD=1000000007;
	cout << comb(666666,333333,MOD)<<endl;
    return 0;
}

