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
bool visited[55][55];
ll d[55][55];
queue< pair<ll,ll> > que;
int main(){
    ll R,C,sx,sy,gx,gy;
    cin >> R >> C >> sy >> sx >> gy >> gx;
    ll i,j;
    string S[R];
    for(i=0;i<R;i++){
        cin >> S[i];
        for(j=0;j<C;j++){
            d[i][j]=-1;
            visited[i][j]=0;
        }
    }
    visited[sy-1][sx-1]=1;
    d[sy-1][sx-1]=0;
    que.push(make_pair(sy-1,sx-1));
    ll tx,ty;
    while(!que.empty()){
            ty=que.front().first;
            tx=que.front().second;
            que.pop();
            if(ty+1<R&&visited[ty+1][tx]==0&&S[ty+1][tx]=='.'){
                que.push(make_pair(ty+1,tx));
                visited[ty+1][tx]=1;
                d[ty+1][tx]=d[ty][tx]+1;
            }
            if(ty>0&&visited[ty-1][tx]==0&&S[ty-1][tx]=='.'){
                que.push(make_pair(ty-1,tx));
                visited[ty-1][tx]=1;
                d[ty-1][tx]=d[ty][tx]+1;
            }
            if(tx+1<C&&visited[ty][tx+1]==0&&S[ty][tx+1]=='.'){
                que.push(make_pair(ty,tx+1));
                visited[ty][tx+1]=1;
                d[ty][tx+1]=d[ty][tx]+1;
            }
            if(tx>0&&visited[ty][tx-1]==0&&S[ty][tx-1]=='.'){
                que.push(make_pair(ty,tx-1));
                visited[ty][tx-1]=1;
                d[ty][tx-1]=d[ty][tx]+1;
            }
            
        }
    cout << d[gy-1][gx-1] << endl;
    return 0;
}
