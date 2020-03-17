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
    ll n,c;
    cin >> n;
    ll dp[n+1];
    ll mxps[200005];
    ll i;
    for(i=0;i<200005;i++){
      mxps[i]=0;
    }
    dp[0]=1;
    for(i=1;i<=n;i++){
      cin >> c;
      if(mxps[c]==0|mxps[c]==i-1){
        dp[i]=dp[i-1];
      }else{
        dp[i]=(dp[i-1]+dp[mxps[c]])%1000000007;
      }
      mxps[c]=i;
    }
    cout << dp[n];
    return 0;
}
