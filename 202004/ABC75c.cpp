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
vector <ll> g[100][100];
ll visited[100][100];
ll dfs(ll i,ll j,ll cnt){
    for(auto itr=g[j][i].begin();itr!=g[j][i].end();++itr){
        if(visited[j][*itr]==0){
            visited[j][*itr]=1;
            cnt=dfs(*itr,j,cnt+1);
        }
    }
    return cnt;
}

int main(){
    ll N,M;
    cin >> N >> M;
    ll i,j;
    ll a,b;
    for(i=0;i<M;i++){
        cin >> a >> b;
        for(j=0;j<M;j++){
            if(i!=j){
                g[j][a-1].push_back(b-1);
                g[j][b-1].push_back(a-1);
            }
        }
        for(j=0;j<N;j++){
            visited[i][j]=0;
        }
    }
    ll ans=0;
    for(j=0;j<M;j++){
        visited[j][0]=1;
        if(dfs(0,j,1)!=N)ans++;
    }
    cout << ans;
    return 0;
}
