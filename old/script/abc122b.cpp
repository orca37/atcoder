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
    string s;
    cin >> s;
    ll i;
    ll tmp=0;
    ll mx=0;
    for(i=0;i<s.size();i++){
      if(s[i]=='A'||s[i]=='T'||s[i]=='G'||s[i]=='C')tmp++;else tmp=0;
      mx=max(tmp,mx);
    }
    cout << mx;
    return 0;
}
