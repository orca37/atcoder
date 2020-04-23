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
    ll a;
    ll i;
    map<ll,bool> mp;
    ll ans=0;
    for(i=0;i<N;i++){
        cin >> a;
        while(a%2==0){
            a=a/2;
        }
        if(mp.count(a)==0){
            mp[a]=1;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
