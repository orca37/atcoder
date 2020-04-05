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
    string S;
    ll T;
    cin >> S >> T;
    ll i;
    ll x=0,y=0,z=0;
    for(i=0;i<S.size();i++){
        if(S[i]=='L')x++;
        if(S[i]=='R')x--;
        if(S[i]=='U')y++;
        if(S[i]=='D')y--;
        if(S[i]=='?')z++;
    }
    if(T==1)cout<<abs(x)+abs(y)+z <<endl;
    else cout <<max(abs(x)+abs(y)-z,(x+y+z)%2)<<endl;
    return 0;
}