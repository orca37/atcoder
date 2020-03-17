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
    ll N,W;
    cin >> N >> W;
    ll maxv=100000;
    ll dp[N+1][maxv+1];
    ll i,j;
    dp[0][0]=0;
    for(j=1;j<=maxv;j++){
      dp[0][j]=W+1;
    }
    ll w,v;
    for(i=1;i<=N;i++){
      cin >> w >> v;
      for(j=0;j<=maxv;j++){
        dp[i][j]=dp[i-1][j];
          if(j-v>=0 && dp[i][j]>dp[i-1][j-v]+w)dp[i][j]=dp[i-1][j-v]+w;
      }
    }
    for(j=maxv;j>=0;j--){
      if(dp[N][j]<=W){
        cout << j;
        return 0;
      }
    }
    return 0;
}
