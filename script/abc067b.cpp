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
    ll n,k;
    cin >> n >> k;
    ll l[n],i;
    for(i=0;i<n;i++){
      cin >>l[i];
    }
    sort(l,l+n,greater<int>());
    ll ans=0;
    for(i=0;i<k;i++){
      ans+=l[i];
    }
    cout << ans;
    return 0;
}
