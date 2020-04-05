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
void dfs(ll t,vector <ll> v[],ll visited[],ll cnt[],ll sum){
    visited[t]=1;
    cnt[t]+=sum;
    for(auto itr=v[t].begin();itr!=v[t].end();++itr){
        if(visited[*itr]==0)dfs(*itr,v,visited,cnt,cnt[t]);
    }
    return ;
}

int main(){
    ll N,Q;
    cin >> N >>Q;
    ll i;
    ll a,b;
    vector <ll> v[N];
    for(i=0;i<N-1;i++){
        cin >> a >> b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);
    }
    ll cnt[N];
    ll visited[N];
    for(i=0;i<N;i++){
        cnt[i]=0;
        visited[i]=0;
    }
    ll p,x;
    for(i=0;i<Q;i++){
        cin >> p >> x;
        cnt[p-1]+=x;
    }
    dfs(0,v,visited,cnt,0);
    for(i=0;i<N;i++){
        cout << cnt[i] << " ";
    }
    return 0;
}
