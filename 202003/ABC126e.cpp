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
ll root(ll X,ll par[]){
    if(X==par[X]){
        return X;
    }else{
        par[X]=root(par[X],par);
        return par[X];
    }
}
void merge(ll X,ll Y,ll par[]){
    if(root(X,par)!=root(Y,par))par[root(Y,par)]=root(X,par);
    return;
}

int main(){
    ll N,M;
    cin >> N >> M;
    ll par[N];
    ll i;
    for(i=0;i<N;i++){
        par[i]=i;
    }
    ll X,Y,Z,ans=N;
    for(i=0;i<M;i++){
        cin >> X >> Y>>Z;
        X--;
        Y--;
        if(root(X,par)!=root(Y,par)){
            merge(X,Y,par);
            ans--;
            }
        }
    cout << ans;
    return 0;
}
