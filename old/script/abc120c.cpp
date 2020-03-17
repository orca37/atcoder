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
    ll num0=0,num1=0;
    for(ll i;i<s.size();i++){
      if(s[i]=='0')num0++;else num1++;
    }
    cout << 2*min(num0,num1);
    return 0;
}
