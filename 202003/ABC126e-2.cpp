#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
using namespace std;
#define ll long long

vector< ll > g[222222];
ll visited[222222];
ll cnt[222222];
void dfs(ll t,ll c){
    visited[t]=1;
    cnt[t]+=c;
    for(auto itr=g[t].begin();itr!=g[t].end();++itr){
        if(visited[*itr]==0)dfs(*itr,cnt[t]);
    }
    return ;
}

int main(){
    ll N,Q;
    cin >> N >> Q;
    ll i;
    ll a,b;
    for(i=0;i<N-1;i++){
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    for(i=0;i<N;i++){
        cnt[i]=0;
        visited[i]=0;
    }
    for(i=0;i<Q;i++){
        cin >> a >> b;
        cnt[a-1]+=b;
    }
    dfs(0,0);
    for(i=0;i<N;i++){
        cout <<cnt[i]<<" ";
    }
    return 0;
}