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
#include<bitset>
#include<math.h>
using namespace std;
#define ll long long

int main(){
    ll A,B;
    cin >> A >> B;
    if(A<6)cout << 0;
    if(A>12)cout << B;
    if(A>=6&&A<=12)cout << B/2;
    return 0;
}
