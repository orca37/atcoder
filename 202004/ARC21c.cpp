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
    ll n;
    cin >> n;
    ll i,j;
    ll T0,A0,T1,A1;
    cin >> T0 >> A0;
    ll l,r,t;
    for(i=1;i<n;i++){
        cin >> T1 >> A1;
        l=0;r=1;
        while(T1*r<T0||A1*r<A0){
            r*=2;
        }
        while(r-l>1){
            t=(l+r)/2;
            if(T1*t<T0||A1*t<A0)l=t;else r=t;
        }
        T0=r*T1;
        A0=r*A1;
    }
    cout << T0+A0;
    return 0;
}
