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
    ll Q,H,S,D;
    cin >> Q >> H >> S >> D;
    H=min(2*Q,H);
    S=min(2*H,S);
    D=min(2*S,D);
    ll N;
    cin >> N;
    cout << N/2*D+S*(N%2);
    return 0;
}