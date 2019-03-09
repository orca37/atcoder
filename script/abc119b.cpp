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
  int N;
  double x,ans=0;
  string s;
  ll i;
  cin >> N;
  for(i=0;i<N;i++){
    cin >> x >> s;
    if(s[0]=='J')ans+=x;else ans+=380000.0*x;
  }
  cout << ans;
  return 0;
}
