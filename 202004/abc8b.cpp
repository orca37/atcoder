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
    ll N;
    cin >> N;
    ll i;
    map< string, ll > mp;
    string s,ans;
    ll tmp=0;
    for(i=0;i<N;i++){
       cin >> s;
       if(mp.count(s)!=0)mp[s]=mp[s]+1;else mp[s]=1;
       if(tmp<mp[s])ans=s;
       tmp=max(tmp,mp[s]);
    }
    cout << ans << endl;
    return 0;
}