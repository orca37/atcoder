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
  ll flag[M];
  ll i,j;
  for(i=0;i<M;i++){
    flag[i]=0;
  }
  ll K,A;
  for(i=0;i<N;i++){
    cin >> K;
    for(j=0;j<K;j++){
      cin >> A;
      flag[A-1]+=1;
    }
  }
  ll ans=0;
  for(i=0;i<M;i++){
    if(flag[i]==N){
      ans++;
    }
  }
  cout << ans;
}
