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
    ll N;
    cin >> N;
    vector<ll> v;
    ll i;
    ll e;
    for(i=0;i<N;i++){
      cin >> e;
      v.push_back(e);
    }
    sort(v.begin(),v.end());
    ll l,r,t,tar=1;
    ll cnt=0;
    for(auto it=v.end()-1;it >=v.begin();--it){
      cout << *it <<endl;
    }
    return 0;
}
