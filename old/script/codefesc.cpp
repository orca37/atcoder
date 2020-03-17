#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
#define MOD 1000000007
ll mpow(ll x, ll n){ //x^n(mod M) ←普通にpow(x,n)では溢れてしまうため，随時mod計算
    ll ans = 1;
    while(n != 0){
        if(n&1) ans = ans*x % MOD;
        x = x*x % MOD;
        n = n >> 1;
    }
    return ans;
}

int main(){
    ll N,K;
    cin >> N >> K;
    ll M=N+K-1;
    ll a[M+3];
    ll inv[M+3];
    ll i;
    a[0]=1;
    for(i=1;i<=M;i++){
      a[i]=a[i-1]*i%MOD;
    }
    inv[M]=mpow(a[M],MOD - 2);
    for(i=M-1;i>=0;i--){
      inv[i]=inv[i+1]*(i+1)%MOD;
    }
    ll tmp;
    ll cnt=0;
    for(i=0;i<N;i++){
      cin >>tmp;
      while(tmp!=0){
        tmp=tmp/2;
        cnt++;
      }
    }
    ll ans=(a[M]*inv[K]%MOD)*inv[N-1]%MOD;
    if(cnt>K){
      ans-=(a[M-cnt]*inv[K-cnt]%MOD)*inv[N-1]%MOD;
      ans++;
    }
    cout << cnt <<endl;
    cout << ans <<endl;
    return 0;
}
