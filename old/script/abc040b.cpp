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
    ll i=1;
    ll ans=n;
    while(i*i<=n){
      ans=min(ans,n/i-i+n%i);
      i++;
    }
    cout << ans;
    return 0;
}
