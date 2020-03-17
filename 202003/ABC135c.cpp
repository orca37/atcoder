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
    ll N,i;
    cin >> N;
    ll A[N+1],B;
    for(i=0;i<=N;i++){
        cin >> A[i];
    }
    ll ans=0;
    for(i=0;i<N;i++){
        cin >> B;
        ans+=min(A[i]+A[i+1],B);
        A[i+1]=max(A[i+1]-max(B-A[i],(ll)0),(ll)0);
    }
    cout << ans;
    return 0;
}
