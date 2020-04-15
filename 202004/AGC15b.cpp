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
    string s;
    cin >> s;
    ll i;
    ll ans=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='U')ans+=2*i+s.size()-1-i;
        if(s[i]=='D')ans+=i+2*(s.size()-1-i);
    }    
    cout << ans;
    return 0;
}
