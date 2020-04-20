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
    ll mx=0;
    ll i;
    for(i=1;i*i<=n;i++){
        if(n%i==0)mx=i;
    }
    ll t=n/mx;
    ll cnt=0;
    while(t>0){
        t=t/10;
        cnt++;
    }
    cout << cnt;
    return 0;
}
