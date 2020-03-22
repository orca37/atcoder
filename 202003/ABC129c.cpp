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
int main(){
    ll mod=1000000007;
    ll N,M;
    cin >> N >> M;
    ll dp[N+1];
    ll i,j;
    ll a[M];
    for(j=0;j<M;j++){
        cin >> a[j];
    }
    dp[0]=1;
    j=0;
    if(M>j&&a[j]==1){
        dp[1]=0;
        j++;
    }else dp[1]=1;
    for(i=2;i<=N;i++){
        if(M>j&&a[j]==i){
            dp[i]=0;
            j++;
        }else dp[i]=(dp[i-1]+dp[i-2])%mod;
    }
    cout << dp[N];
    return 0;
}