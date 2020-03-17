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
    ll i;
    vector< pair<ll,ll> > cities1;
    vector< pair<ll,ll> > cities2;
    ll a,b;
    for(i=0;i<M;i++){
      cin >> a >>b;
      cities1.push_back(make_pair(b,a));
      cities2.push_back(make_pair(b,i));
    }
    sort(cities1.begin(),cities1.end());
    sort(cities2.begin(),cities2.end());
    ll cnt[N];
    for(i=0;i<N;i++){
      cnt[i]=0;
    }
    vector< pair<ll,ll> > citynumbers1;
    vector< pair<ll,ll> > citynumbers2;
    for(i=0;i<M;i++){
      cnt[cities1[i].second-1]++;
      citynumbers1.push_back(make_pair(cities2[i].second,cnt[cities1[i].second-1]));
      citynumbers2.push_back(make_pair(cities2[i].second,cities1[i].second));
    }
    sort(citynumbers1.begin(),citynumbers1.end());
    sort(citynumbers2.begin(),citynumbers2.end());
    for(i=0;i<M;i++){
      out6(citynumbers2[i].second);
      out6(citynumbers1[i].second);
      cout << endl;
    }
    return 0;
}
