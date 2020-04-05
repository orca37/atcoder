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
bool visited[111];
ll d[111];
queue< ll > que;
vector <ll> G[111];
int main(){
    ll N;
    cin >> N;
    ll i,j;
    ll u,k,v;
    for(i=0;i<N;i++){
        cin >> u >> k;
        for(j=0;j<k;j++){
            cin >> v;
            G[u-1].push_back(v-1);
        }
        d[i]=-1;
        visited[i]=0;
    }
    que.push(0);
    visited[0]=1;
    d[0]=0;
    while(!que.empty()){
        v=que.front();
        que.pop();
        for(vector<ll>::iterator itr=G[v].begin();itr!=G[v].end();++itr){
            if(visited[*itr]==0){
                que.push(*itr);
                visited[*itr]=1;
                d[*itr]=d[v]+1;
            }
        }
    }
    for(i=0;i<N;i++){
        cout <<i+1 << " " <<d[i] <<endl;
    }
    return 0;
}
