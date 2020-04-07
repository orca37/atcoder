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
    ll n;
    cin >> n;
    ll a=0,b=0,c=1,d;
    ll i;
    for(i=2;i<n;i++){
        d=(a+b+c)%10007;
        a=b;
        b=c;
        c=d;
    }
    cout << b%10007 << endl;
    return 0;
}