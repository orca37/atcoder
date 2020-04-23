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
    ll N,K;
    cin >> N >> K;
    double R[N];
    ll i;
    for(i=0;i<N;i++){
        cin >> R[i];
    }
    sort(R,R+N);
    double ans=0;
    for(i=N-K;i<N;i++){
        ans=(ans+R[i])/2.0;
    }
    cout << setprecision(20) << ans << endl;
    return 0;
}
