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
#include<bitset>
#include<math.h>
using namespace std;
#define ll long long

int main(){
    ll N,A,i;
    cin >> N;
    map<ll,bool> mp;
    ll ans=0;
    for(i=0;i<N;i++){
        cin >> A;
        if(mp.count(A)==0)mp[A]=0;
        mp[A]=(mp[A]+1)%2;
        ans+=-1+2*mp[A];
    }
    cout << ans;
    return 0;
}
