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
    ll N,K,h;
    cin >> N >>K;
    ll i;
    ll ans=0;
    for(i=0;i<N;i++){
        cin >> h;
        if(h>=K)ans++;
    }
    cout << ans;
    return 0;
}
