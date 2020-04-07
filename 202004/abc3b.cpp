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
    string s,t;
    cin >> s >> t;
    ll i;
    bool flag=1;
    for(i=0;i<s.size();i++){
        if(s[i]!=t[i]&&s[i]!='@'&&t[i]!='@')flag =0;
        if(t[i]=='@'&&s[i]!='@'&&s[i]!='a'&&s[i]!='t'&&s[i]!='c'&&s[i]!='o'&&s[i]!='d'&&s[i]!='e'&&s[i]!='r')flag=0;
        if(s[i]=='@'&&t[i]!='@'&&t[i]!='a'&&t[i]!='t'&&t[i]!='c'&&t[i]!='o'&&t[i]!='d'&&t[i]!='e'&&t[i]!='r')flag=0;
    }
    cout << (flag?"You can win":"You will lose") << endl;
    return 0;
}