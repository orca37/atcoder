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
ll par[100001];
ll dist[100001];
ll root(ll x){
    ll y=par[x];
    if(y!=x){
       par[x]=root(y);
       dist[x]+=dist[y];
    }
    return par[x];
}
bool unite(ll L,ll R,ll D){
    ll x=root(L);
    ll y=root(R);
    if(x==y){
        if(dist[L]-dist[R]==D)return true;else return false;
    }else{
        par[x]=y;
        dist[x]=dist[R]+D-dist[L];
        return true;
    }
}
int main(){
    ll N,M;
    cin >> N >> M;
    ll i;
    for(i=0;i<N;i++){
        par[i]=i;
        dist[i]=0;
    }
    ll L,R,D;
    for(i=0;i<M;i++){
        cin >> L >> R >> D;
        if(!unite(L-1,R-1,D)){
            cout << "No"<<endl;
            return 0;
        }
    }
    cout << "Yes" <<endl;
    return 0;
}
