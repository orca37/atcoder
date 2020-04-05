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
    ll A[N];
    ll i;
    ll sum=0;
    for(i=0;i<N;i++){
        cin >> A[i];
        sum+=A[i];
    }
    sort(A,A+N);
    if(A[N-M]*4*M>=sum)cout << "Yes";else cout << "No";
    return 0;
}
