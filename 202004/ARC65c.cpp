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
    ll a,b;
    cin >> a >> b;
    ll i;
    if(abs(a-b)>1)cout << 0;else{
        ll t=1;
        for(i=1;i<=min(a,b);i++){
            t=t*i%MOD;
        }
        if(a==b)cout << 2*t%MOD*t%MOD;else cout << t*t%MOD*max(a,b)%MOD;
    }
    return 0;
}
