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
    ll ans=N;
    ll i;
    ll a;
    for(i=0;i<M;i++){
        cin >> a;
        ans-=a;
    }
    cout << max((ll)-1,ans)<<endl;
    return 0;
}
