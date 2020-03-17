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
ll root(ll x,ll par[]){
  if(par[x]==x)return x;
  return par[x] = root(par[x],par);
}

ll unite(ll x, ll y,ll par[],ll size[]){
  ll rx= root(x,par);
  ll ry= root(y,par);
  ll r;
  if(rx == ry){
    return 0;
  }else{
    r=size[rx]*size[ry];
    if(size[rx]<size[ry]){
      par[ry]=rx;
      size[rx]+=size[ry];
    }else{
      par[rx]=ry;
      size[ry]+=size[rx];
    }
    return r;
  }
}

int main(){
    ll N,M;
    cin >> N >> M;
    pair<ll,ll> br[M+1];
    ll par[N+1];
    ll size[N+1];
    ll ans[M+1];
    ll i;
    for(i=1;i<N+1;i++){
      par[i]=i;
      size[i]=1;
    }
    for(i=1;i<=M;i++){
      cin >> br[i].first >> br[i].second;
    }
    ans[M]=N*(N-1)/2;
    for(i=M-1;i>0;i--){
      ans[i]=ans[i+1]-unite(br[i+1].first,br[i+1].second,par,size);
    }
    for(i=1;i<=M;i++){
      cout << ans[i]<<endl;
    }
    return 0;
}
