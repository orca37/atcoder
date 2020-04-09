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
#include<functional>
#include<cassert>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll i;
    ll A[N];
    for(i=0;i<N;i++){
        cin >> A[i];
        A[i]-=i+1;
    }
    sort(A,A+N);
    ll sum=0;
    for(i=0;i<N;i++){
        sum+=abs(A[i]-A[N/2]);
    }
    cout << sum << endl;
    return 0;
}