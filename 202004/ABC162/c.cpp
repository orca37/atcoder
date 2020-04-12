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
ll gcd(ll a,ll b){
    ll r;
    while(a%b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return b;
}
int main(){
    ll K;
    ll i,j,k;
    ll ans=0;
    cin >> K;
    for(i=1;i<=K;i++){
        for(j=1;j<=K;j++){
            for(k=1;k<=K;k++){
                 ans+=gcd(i,gcd(j,k));
            }
        }
    }
    cout << ans;
    return 0;
}
