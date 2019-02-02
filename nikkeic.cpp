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
  ll n;
  cin >> n;
  ll a,b,i;
  vector<pair <ll,ll> > v(n);
  for(i=0;i<n;i++){
    cin >> a >> b;
    v[i].first=a+b;
    v[i].second=a;
  }
  sort(v.begin(),v.end());
  ll ans = 0;
  for(i=0;i<n;i++){
    if(i%2==0)ans+=v[n-1-i].second;
    if(i%2==1)ans-=v[n-1-i].first-v[n-1-i].second;
  }
  cout << ans;
  return 0;
}
