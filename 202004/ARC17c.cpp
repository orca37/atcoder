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
#define MOD 1000000007
int main(){
    ll N,X;
    cin >> N >> X;
    ll i,j;
    ll w[N];
    for(i=0;i<N;i++){
        cin >> w[i]; 
    }
    ll ans=0,tmp;
    map<ll,ll> mp;
    for(i=0;i<(1<<N/2);i++){
        tmp=0;
        for(j=0;j<N/2;j++){
            if((i>>j)&1)tmp+=w[j];
        }
        if(mp.count(tmp)==0)mp[tmp]=1;else mp[tmp]+=1;
    }
    ll Na=N-N/2;
    for(i=0;i<(1<<Na);i++){
        tmp=0;
        for(j=0;j<Na;j++){
            if((i>>j)&1)tmp+=w[N/2+j];
        }
        if(mp.count(X-tmp)!=0)ans+=mp[X-tmp];
    }
    cout << ans <<endl;
    return 0;
}
