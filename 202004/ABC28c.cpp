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
    ll a[5];
    ll i;
    for(i=0;i<5;i++){
        cin >> a[i];
    }
    cout << max(a[4]+a[2]+a[1],a[4]+a[3]+a[0])<<endl;
}
