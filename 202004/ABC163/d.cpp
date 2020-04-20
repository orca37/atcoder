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
    ll ans=0,i,j;
    for(i=K;i<=N+1;i++){
        ans=(ans+(2*N-i+1)*i/2-i*(i-1)/2+1)%MOD;
    }
    cout << ans;
    return 0;
}
