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
    ll dp[N][3];
    ll a[3];
    ll i,j;
    ll tmp;
    for(j=0;j<3;j++){
      cin >> dp[0][j];
    }
    for(i=1;i<N;i++){
      cin >> a[0] >> a[1] >> a[2];
      for(j=0;j<3;j++){
        dp[i][j]=dp[i-1][(j+1)%3]+a[j];
        if(dp[i][j]<dp[i-1][(j+2)%3]+a[j])dp[i][j]=dp[i-1][(j+2)%3]+a[j];
      }
    }
    ll ans=dp[N-1][0];
    for(j=1;j<3;j++){
      if(ans<dp[N-1][j])ans=dp[N-1][j];
    }
    cout << ans;
    return 0;
}
