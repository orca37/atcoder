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
    ll N;
    cin >> N;
    ll i;
    pair<ll,ll> p[N];
    ll a;
    for(i=0;i<N;i++){
        cin >> a;
        p[i]=make_pair(a,i+1);
    }
    sort(p,p+N);
    for(i=0;i<N;i++){
        cout << p[N-1-i].second<<endl;
    }
    return 0;
}
