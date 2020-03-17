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
    string s;
    cin >> s;
    ll i;
    ll ans=1;
    ll a[26];
    for(i=0;i<26;i++){
      a[i]=1;
    }
    for(i=0;i<n;i++){
      a[s[i]-97]+=1;
    }
    for(i=0;i<26;i++){
      ans=(ans*a[i])%1000000007;
    }
    ans=(ans-1)%1000000007;
    cout << ans;
    return 0;
}
