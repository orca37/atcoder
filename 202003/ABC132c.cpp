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
    ll d[n];
    ll i;
    for(i=0;i<n;i++){
        cin >> d[i];
    }
    sort(d,d+n);
    cout<<d[n/2]-d[n/2-1];
    return 0;
}