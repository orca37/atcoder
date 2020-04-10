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
int main(){
    ll N,M;
    cin >> N >> M;
    ll i,j;
    pair<ll,ll> p[N+M];
    ll A;
    for(i=0;i<N;i++){
        cin >> A;
        p[i]=make_pair(A,1);
    }
    ll B,C;
    for(i=0;i<M;i++){
        cin >> B >> C;
        p[N+i]=make_pair(C,B);
    }
    sort(p,p+N+M);
    j=0;
    i=N+M-1;
    ll ans=0;
    while(j<N){
        ans+=p[i].first*min(N-j,p[i].second);
        j+=p[i].second;
        i--;
    }
    cout << ans;
    return 0;
}
