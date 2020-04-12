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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    string S;
    cin >> S;
    ll i;
    ll ans=0;
    ll l=0,r=0;
    for(i=0;i<S.size();i++){
        if(S[i]=='<')l++;
        if(S[i]=='>')r++;
        if(i!=S.size()-1&&S[i]=='>'&&S[i+1]=='<'){
            ans+=l*(l+1)/2+r*(r+1)/2-min(l,r);
            l=0;
            r=0;
        }
    }
    ans+=l*(l+1)/2+r*(r+1)/2-min(l,r);
    cout << ans;
    return 0;
}
