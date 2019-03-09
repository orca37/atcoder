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
    ll N,i;
    cin >> N;
    map<ll,ll> mp;
    ll a,cnt;
    for(i=0;i<N;i++){
      cin >> a;
      if(mp.find(a)==mp.end()){
        mp[a]=1;
      }else{
        mp[a]+=1;
      }
      if(mp[a]==a)cnt-=a;
      cnt++;
    }
    cout << cnt;
    return 0;
}
