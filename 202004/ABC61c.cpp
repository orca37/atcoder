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
#define MOD 1000000007
int main(){
    ll N,K;
    cin >> N >> K;
    pair<ll , ll> p[N];
    ll a,b,i;
    for(i=0;i<N;i++){
        cin >> a >> b;
        p[i]=make_pair(a,b);
    }
    sort(p,p+N);
    ll t=0;
    for(i=0;i<N;i++){
        t+=p[i].second;
        if(t>=K){
            cout << p[i].first;
            return 0;
        }
    }
    return 0;
}
