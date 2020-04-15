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
#define MOD 1000000007
ll powmod(ll p,ll q){
    ll x=1;
    while(q>0){
        if(q&1){
            x = x * p%MOD;
        }
        p=p*p%MOD;
        q>>= 1;
    }
    return x;
}

int main(){
    ll N,K;
    cin >> N >> K;
    ll i,j;
    ll num[K];
    ll ans=0;
    for(i=K;i>0;i--){
       j=2*i;
       num[i-1]=powmod(K/i,N);
       while(j<=K){
           num[i-1]=(num[i-1]+MOD-num[j-1])%MOD;
           j+=i;
       }
       ans=(ans+num[i-1]*i%MOD)%MOD;
    }
    cout << ans <<endl;
    return 0;
}
