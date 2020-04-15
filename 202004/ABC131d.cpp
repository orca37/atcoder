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
    pair< ll,ll> p[N];
    ll i;
    ll a,b;
    for(i=0;i<N;i++){
        cin >> a >> b;
        p[i]=make_pair(b,a);
    }
    sort(p,p+N);
    ll sum=0;
    for(i=0;i<N;i++){
        sum+=p[i].second;
        if(p[i].first<sum){
            cout << "No";
            return 0;
        }
    }
            cout << "Yes";
    return 0;
}
