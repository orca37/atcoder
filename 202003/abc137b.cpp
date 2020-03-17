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
    for(ll i=b-a+1;i<=b+a-1;i++){
        cout << i <<" ";
    }
    return 0;
}
