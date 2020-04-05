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
    ll r,d,x;
    cin >> r >> d >> x;
    ll i;
    for(i=0;i<10;i++){
        x=r*x-d;
        cout << x <<endl;
    }
    return 0;
}
