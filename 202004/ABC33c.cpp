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
    bool flag=1;
    ll i,ans=0;
    for(i=0;i<s.size();i+=2){
        if(s[i]=='0')flag=0;
        if(i+1==s.size()||s[i+1]=='+'){
            ans+=flag;
            flag=1;
        }
    }
    cout << ans<<endl;
    return 0;
}
