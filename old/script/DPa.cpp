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
    ll N;
    cin >> N;
    ll h[N+1];
    ll i;
    for (i=1;i<=N;i++){
      cin >> h[i];
    }
    h[0]=h[1];
    ll dp[N];
    dp[0] = dp[1] = 0;
    for(i=2;i<=N;i++){
      dp[i]=dp[i-1]+abs(h[i]-h[i-1]);
      if(dp[i]>dp[i-2]+abs(h[i]-h[i-2]))dp[i]=dp[i-2]+abs(h[i]-h[i-2]);
    }
    cout << dp[N];
    return 0;
}
