#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    ll i;
    ll a[n];
    for(i=0;i<n;i++){
      cin >> a[i];
    }
    sort(a,a+n);
    cout << a[n-1]-a[0];
    return 0;
}
