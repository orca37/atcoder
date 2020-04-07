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
    ll A[N];
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    sort(A,A+N);
    ll ans;
    for(i=0;i<N-1;i++){
        if(A[i+1]==A[i])ans++;
    }
    cout << ans <<endl;
    return 0;
}