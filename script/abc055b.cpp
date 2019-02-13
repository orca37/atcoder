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
    ll n,i;
    cin >> n;
    ll mod=1000000007;
    ll ans=1;
    for(i=1;i<=n;i++){
      ans=ans*i%mod;
    }
    cout <<ans;
    return 0;
}
