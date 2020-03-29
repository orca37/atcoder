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
    ll K,N,i;
    cin >> K >> N;
    ll A[N+1];
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    A[N]=A[0]+K;
    ll mx=0;
    for(i=0;i<N;i++){
        mx=max(mx,A[i+1]-A[i]);
    }
    cout << K-mx;
    return 0;
}
