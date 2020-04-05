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
    ll N,M;
    cin >> N >> M;
    ll i,j;
    ll k[M];
    vector <ll> s[M];
    ll p[M];
    ll t;
    for(i=0;i<M;i++){
        cin >> k[i];
        for(j=0;j<k[i];j++){
            cin >> t;
            s[i].push_back(t);
        }
    }
    ll a[M];
    for(i=0;i<M;i++){
        cin >> p[i];
    }
    ll ans=0;
    bool flag;
    for(i=0; i < (1<<N);i++){
        for(j=0;j<M;j++){
            a[j]=p[j];
        }
        flag=1;
        for(j=0;j<M;j++){
                for(auto itr=s[j].begin();itr!=s[j].end();++itr){
                   if(i & (1<<(*itr-1)))a[j]=(a[j]+1)%2; 
                }
            }
        for(j=0;j<M;j++){
            if(a[j]==1)flag=0;
        }
        if(flag==1)ans++;
    }
    cout << ans <<endl ;
    return 0;
}
