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
    ll A,B;
    cin >> A >> B;
    ll t=10;
    while(t<=B){
        t*=10;
    }
    cout << 2*A*t+2*B << endl;
    return 0;
}