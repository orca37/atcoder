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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll A[N*3];
    ll i;
    for(i=0;i<N*3;i++){
        cin >> A[i];
    }
    sort(A,A+N*3);
    ll ans=0;
    for(i=1;i<N+1;i++){
        ans+=A[3*N-2*i];
    }
    cout << ans;
    return 0;
}