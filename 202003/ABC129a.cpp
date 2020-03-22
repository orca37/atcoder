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
    ll P,Q,R;
    cin >> P >> Q >> R;
    cout << min(P+Q,min(Q+R,P+R));
}