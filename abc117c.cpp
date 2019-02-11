#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll N,M;
    cin >> N >> M;
    ll i;
    ll X[M];
    for(i=0;i<M;i++){
      cin >> X[i];
    }
    sort(X,X+M);
    ll dist[M-1];
    for(i=0;i<M-1;i++){
      dist[i]=X[i+1]-X[i];
    }
    sort(dist,dist+M-1);
    ll ans=0;
    for(i=0;i<M-N;i++){
      ans+=dist[i];
    }
    cout << ans;
    return 0;
}
