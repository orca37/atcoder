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
    ll N,X;
    cin >> N >> X;
    ll i;
    ll sum;
    ll A,ans;
    for(i=0;i<N;i++){
        cin >> A;
        if(X%2==1)ans+=A;
        X=X/2;
    }
    cout << ans << endl;
    return 0;
}