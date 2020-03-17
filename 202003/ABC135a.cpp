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
    ll a,b;
    cin >> a >> b;
    if((a+b)%2)cout <<"IMPOSSIBLE";else cout << (a+b)/2;
    return 0;
}
