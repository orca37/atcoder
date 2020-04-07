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
    if(a<b)swap(a,b);
    cout << min(a-b,10+b-a) <<endl;
    return 0;
}