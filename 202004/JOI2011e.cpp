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
ll mp[1111][1111];
ll H,W,N;
ll bfs(ll sy,ll sx,ll gy,ll gx){
    queue<pair <ll,ll> > que;
    que.push(make_pair(sy,sx));
    ll d[H][W];
    ll visited[H][W];
    ll i,j;
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            d[i][j]=0;
            visited[i][j]=0;
        }
    }
    visited[sy][sx]=1;
    ll ty,tx;
    ll dx[4]={1,0,-1,0};
    ll dy[4]={0,1,0,-1};
    ll x,y;
    while(!que.empty()){
        ty=que.front().first;
        tx=que.front().second;
        que.pop();
        if(ty==gy&&tx==gx) break;
        for(i=0;i<4;i++){
            x=tx+dx[i];
            y=ty+dy[i];
            if(0<=x && x<W && 0<=y && y<H && mp[y][x]==0 &&visited[y][x]==0){
                que.push(make_pair(y,x));
                d[y][x]=d[ty][tx]+1;
                visited[y][x]=1;
            }
        }
    }
    return d[gy][gx];
}
int main(){
    cin >> H >> W >> N;
    string S[H];
    ll i,j;
    for(i=0;i<H;i++){
        cin >> S[i];
    }
    ll ans=0;
    pair <ll ,ll > s[N+1];
    pair <ll ,ll > g[N];
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            if(S[i][j]=='.')mp[i][j]=0;
            else if(S[i][j]=='X')mp[i][j]=1;
            else if(S[i][j]=='S'){
                s[0]=make_pair(i,j);
                mp[i][j]=0;
            }
            else{
                s[S[i][j]-'0']=make_pair(i,j);
                g[S[i][j]-'1']=make_pair(i,j);
                mp[i][j]=0;
            }
        }
    }
    for(i=0;i<N;i++){
        ans+=bfs(s[i].first,s[i].second,g[i].first,g[i].second);
    }
    cout << ans<< endl;
    return 0;
}
