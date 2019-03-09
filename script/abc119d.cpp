#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
using namespace std;
#define ll long long
pair<ll,ll> bi(ll x,ll s[],ll A){
  ll l=0,r=A-1;
  ll p;
  while(r-l>1){
    p=(l+r)/2;
    if(x>=s[p])l=p;
    if(x<=s[p])r=p;
  }
  pair<ll,ll> a(s[l],s[r]);
  return a;
}

int main(){
  ll A,B,Q;
  cin >> A >> B >> Q;
  ll s[A],t[B];
  ll i;
  ll ans,tmp;
  ll x;
  ll t1,t2;
  for(i=0;i<A;i++){
    cin >> s[i];
  }
  for(i=0;i<B;i++){
    cin >> t[i];
  }
  for(i=0;i<Q;i++){
    ans=1000000000000;
    cin >> x;
    t1=bi(x,s,A).first;
    t2=bi(t1,t,B).first;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    t1=bi(x,s,A).first;
    t2=bi(t1,t,B).second;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    t1=bi(x,s,A).second;
    t2=bi(t1,t,B).first;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    t1=bi(x,s,A).second;
    t2=bi(t1,t,B).second;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    t1=bi(x,t,B).first;
    t2=bi(t1,s,A).first;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    t1=bi(x,t,B).first;
    t2=bi(t1,s,A).second;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    t1=bi(x,t,B).second;
    t2=bi(t1,s,A).first;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    t1=bi(x,t,B).second;
    t2=bi(t1,s,A).second;
    tmp=abs(t1-x)+abs(t2-t1);
    ans=min(ans,tmp);
    cout << ans <<endl;
  }

  return 0;
}
