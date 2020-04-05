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
    ll L,H;
    cin >> L >> H;
    ll N;
    cin >> N;
    ll A;
    ll i;
    for(i=0;i<N;i++){
        cin >> A;
        if(A<=H)cout << max(L-A,(ll)0);else cout << -1;
        cout << endl;
    }
    return 0;
}