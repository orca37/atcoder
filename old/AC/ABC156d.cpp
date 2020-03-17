#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
using namespace std;
#define ll long long
ll modpow(ll a,ll n,ll mod){
	ll ans=1;
	for(;n>0;n>>=1,a=a * a % mod){
		if(n%2==1){
			ans = ans * a % mod;
		}
	}

	return ans;
}
int main(){
	ll n,a,b;
    cin >> n >> a >> b;
    ll mod=1000000007;
    ll x1=1,x2=1;
    for(ll i=1;i<=a;i++){
        x1=x1*(n-i+1)%mod;
        x2=x2*i%mod;
    }
    ll x=x1*modpow(x2,mod-2,mod)%mod;
    ll y1=1,y2=1;
    for(ll i=1;i<=b;i++){
        y1=y1*(n-i+1)%mod;
        y2=y2*i%mod;
    }
    ll y=y1*modpow(y2,mod-2,mod)%mod;
    cout << (modpow(2,n,mod)+(mod-x)+(mod-y))%mod-1;
    return 0;
}
