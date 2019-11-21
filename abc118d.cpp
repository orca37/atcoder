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
  ll N,M;
  cin >> N >> M;
  int i;
  bool Aflag[10];
  int A;
  for(i=1;i<=9;i++){
    Aflag[i]=0;
  }
  for(i=0;i<M;i++){
    cin >> A;
    Aflag[A]=1;
  }
  string dp[N+1];
  dp[0]="";
  dp[1]="";
  dp[2]="";
  dp[3]="";
  dp[4]="";
  dp[5]="";
  dp[6]="";
  for(i=0;i<=N;i++){

  }
  cout << dp[N];
  return 0;
}
