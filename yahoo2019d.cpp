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
    ll L,A;
    cin >> L;
    ll dp[L][5];
    cin >> A;
    dp[0][0]=A;
    if(A==0)dp[0][1]=2;else dp[0][1]=A%2;
    dp[0][2]=(A+1)%2;
    if(A==0)dp[0][3]=2;else dp[0][3]=A%2;
    dp[0][4]=A;
    ll tmp,i;
    for(i=1;i<L;i++){
      cin >> A;
      tmp =dp[i-1][0];
      dp[i][0]=tmp+A;
      tmp = min(tmp,dp[i-1][1]);
      if(A==0)dp[i][1]=tmp+2;else dp[i][1]=tmp+A%2;
      tmp = min(tmp,dp[i-1][2]);
      dp[i][2]=tmp+(A+1)%2;
      tmp = min(tmp,dp[i-1][3]);
      if(A==0)dp[i][3]=tmp+2;else dp[i][3]=tmp+A%2;
      tmp = min(tmp,dp[i-1][4]);
      dp[i][4]=tmp+A;
    }
    tmp=dp[L-1][0];
    for(i=1;i<5;i++){
      tmp=min(tmp,dp[L-1][i]);
    }
    cout << tmp;
    return 0;
}
