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
    ll n=s.size();
    ll i;
    for(i=0;i<n;i++){
        if(s[i]!='a'&&s[i]!='i'&&s[i]!='u'&&s[i]!='e'&&s[i]!='o')cout << s[i];
    }
    cout << endl;
    return 0;
}