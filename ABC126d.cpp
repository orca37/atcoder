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
    ll N;
    cin >> N;
    ll u,v,w;
    ll i,j;
    vector<pair<ll,ll> > cld[N+1];
    int col[N+1];
    for(i=1;i<=N;i++){
      col[i]=-1;
    }
    for(i=1;i<=N;i++){
      cin >> u >> v >> w;
      cld[u].append(make_pair(v,1));
      cld[v].append(make_pair(u,1));
    }
    queue<ll> que;
    for(i=1;i<=N;i++){
      if(col[i]==-1){
        col[i]=0
        que.push(i);
      }
      while(!que.empty()){
          j=q.pop();
          for(auto itr=cld[i].begin();itr != cld[i].end();++itr){
            if(col[*itr.first]==-1){
              que.push(*itr.first);
              col[*itr.first]=(*itr.second+col[i])/2;
            }
          }
    }
  }
    return 0;
}
