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
    ll N,T;
    ll A;
    ll i;
    cin >> N >>T;
    ll ans=0,t=0;
    for(i=0;i<N;i++){
        cin >> A;
        ans+=A+T-max(t,A);
        t=A+T;
    }
    cout << ans<<endl;
    return 0;
}