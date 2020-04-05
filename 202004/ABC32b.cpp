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
    ll n,i;
    cin >> S >> n;
    string t;
    map<string,int > m;
    ll ans=0;
    if(n<=S.size()){
    for(i=0;i<S.size()-n+1;i++){
        t=S.substr(i,n);
        if(!m.count(t)){
          m.insert(make_pair(t,1));
            ans++;
        }
    }
    }
    cout << ans<<endl;
    return 0;
}