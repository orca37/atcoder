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
int main(){
    ll N,K;
    cin >> N >> K;
    ll h[N+K];
    ll i,j;
    ll tmp;
    for (i=K;i<N+K;i++){
      cin >> h[i];
    }
    for(i=0;i<K;i++){
      h[i]=h[K];
    }
    h[0]=h[1];
    ll dp[N+K];
    for(i=0;i<K;i++){
      dp[i]=0;
    }
    for(i=K;i<N+K;i++){
        dp[i]=dp[i-K]+abs(h[i]-h[i-K]);
      for(j=K-1;j>0;j--){
        tmp=dp[i-j]+abs(h[i]-h[i-j]);
        if(tmp<dp[i])dp[i]=tmp;
    }
  }
    cout << dp[N+K-1];
    return 0;
}
