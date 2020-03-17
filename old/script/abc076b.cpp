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
    ll i;
    ll ans=1;
    for(i=0;i<n;i++){
      ans=min(ans*2,ans+k);
    }
    cout << ans <<endl;
    return 0;
}
