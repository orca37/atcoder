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
    ll ans[N+1][W+1];
    ll i,j;
    for(j=0;j<=W;j++){
      ans[0][j]=0;
    }
    ll w,v;
    for(i=1;i<=N;i++){
      cin >> w >> v;
      for(j=0;j<=W;j++){
        ans[i][j]=ans[i-1][j];
        if(j>=w && ans[i][j]<ans[i-1][j-w]+v)ans[i][j]=ans[i-1][j-w]+v;
      }
    }
    cout << ans[N][W];
    return 0;
}
