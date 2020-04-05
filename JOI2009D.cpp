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
ll mp[100][100];
ll visited[100][100];
ll dfs(ll n,ll m,ll i,ll j,ll t){
    t++;
    visited[j][i]=1;
    if(j>0&&mp[j-1][i]==1&&visited[j-1][i]==0)t=max(t,dfs(n,m,i,j-1,t));
    if(j+1<m&&mp[j+1][i]==1&&visited[j+1][i]==0)t=max(t,dfs(n,m,i,j+1,t));
    if(i>0&&mp[j][i-1]==1&&visited[j][i-1]==0)t=max(t,dfs(n,m,i-1,j,t));
    if(i+1<n&&mp[j][i+1]==1&&visited[j][i+1]==0)t=max(t,dfs(n,m,i+1,j,t));
    return t;
}

int main(){
    ll n,m;
    cin >> n >> m;
    ll i,j,k,l;
    ll ans=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> mp[j][i];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
                for(l=0;l<m;l++){
                    visited[l][k]=0;
                }
            }
            ans=max(ans,dfs(n,m,i,j,0));
        }
    }
    cout << ans << endl;
    return 0;
}