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
bool field[100][100];
bool visited[100][100];
ll N,M;
ll dfs(ll x,ll y,ll cnt){
    ll dx[4]={1,0,-1,0};
    ll dy[4]={0,1,0,-1};
    ll i,j;
    cnt++;
    ll ans=cnt;
    for(i=0;i<4;i++){
        if(x+dx[i]>=0&&y+dy[i]>=0&&x+dx[i]<N&&y+dy[i]<M&&field[x+dx[i]][y+dy[i]]==1&&visited[x+dx[i]][y+dy[i]]==0){
           visited[x+dx[i]][y+dy[i]]=1;
           ans=max(ans,dfs(x+dx[i],y+dy[i],cnt));
           visited[x+dx[i]][y+dy[i]]=0;
        }
    }
    return ans;
}
int main(){
    cin >> N >> M;
    ll i,j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            cin >> field[i][j];
            visited[i][j]=0;
        }
    }
    ll ans=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(field[i][j]==1){
                visited[i][j]=1;
                ans=max(ans,dfs(i,j,0));
                visited[i][j]=0;
            }
        }
    }
    cout << ans <<endl;
    return 0;
}
