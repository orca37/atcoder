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
    ll a,c;
    cin >> a >> c;
    cout << (c>=2*a?(a+(c-2*a)/4):min(a,c/2)) <<endl;
    return 0;
}
