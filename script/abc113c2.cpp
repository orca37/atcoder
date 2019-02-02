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

int out6(ll x){
  int tmp =100000;
  while(tmp>0){
    cout << x/tmp;
    x=x%tmp;
    tmp/=10;
  }
  return 0;
}

int main(){
    ll N,M;
    cin >> N >> M;
    vector< pair < pair<ll,ll> ,ll > > cities(M);
    ll i;
    for(i=0;i<M;i++){
      cin >> cities[i].first.second >> cities[i].first.first;
      cities[i].second=i;
    }
    sort(cities.begin(),cities.end());
    vector< pair<ll,ll> >ans(M);
    ll numbers[N];
    for(i=0;i<N;i++){
      numbers[i]=0;
    }
    for(i=0;i<M;i++){
      numbers[cities[i].first.second-1]++;
      ans[cities[i].second].second=numbers[cities[i].first.second-1];
      ans[cities[i].second].first=cities[i].first.second;
    }
    for(i=0;i<M;i++){
      out6(ans[i].first);
      out6(ans[i].second);
      cout << endl;
    }
    return 0;
}
