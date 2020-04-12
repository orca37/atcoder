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
    ll a,b,c;
    cin >> a >> b >> c;
    cout << min(a%2*b*c,min(b%2*a*c,c%2*a*b));
    return 0;
}