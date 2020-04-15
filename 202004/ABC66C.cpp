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
    ll a[n];
    ll i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n/2+n%2;i++){
        cout << a[n-1-2*i] << " ";
    }
    for(i=0;i<n/2;i++){
        cout << a[n%2+2*i] << " ";
    }
    return 0;
}
