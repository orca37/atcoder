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
    ll a,b;
    cin >> a >> b;
    if(a!=1&&b!=1)cout<<(a*b)/2+(a*b)%2;else cout << 1;
    return 0;
}
