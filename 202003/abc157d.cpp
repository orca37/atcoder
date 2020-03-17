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
ll root(ll x,ll par[]){
    if(par[x]==x) return x;
    else return par[x]=root(par[x],par);
}

void unite(ll x,ll y,ll par[],ll size[]){
    x=root(x,par);
    y=root(y,par);
    if(x==y) return;
    par[y]=x;
    size[x]=size[x]+size[y];
}
int main(){
    ll N,M,K;
    cin >> N >> M >> K;
    ll par[N],size[N],fr[N];
    ll A,B,C,D;
    ll i;
    for(i=0;i<N;i++)par[i]=i,size[i]=1,fr[i]=1;
    for(i=0;i<M;i++){
        cin >> A >> B;
        unite(A-1,B-1,par,size);
        ++fr[A-1],++fr[B-1];
    }
    ll ans[N];
    for(i=0;i<N;i++){
        ans[i]=size[root(i,par)]-fr[i];
    }
    for(i=0;i<K;i++){
        cin >> C >> D;
        if(root(C-1,par)==root(D-1,par))--ans[C-1],--ans[D-1];
    }
    for(i=0;i<N;i++){
        cout << ans[i] <<" ";
    }
    return 0;
}
