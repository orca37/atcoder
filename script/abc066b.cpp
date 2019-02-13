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
    string s,s1,s2;
    cin >> s;
    ll ans,i;
    for(i=1;i<s.size()/2;i++){
      s1=s.substr(0,i);
      s2=s.substr(i,i);
      if(s1==s2)ans=i*2;
    }
    cout << ans;
    return 0;
}
