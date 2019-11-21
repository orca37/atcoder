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
    ll i;
    vector<ll> v;
    vector<ll> ans;
    ll e;
    for(i=0;i<N;i++){
      cin >> e;
      v.push_back(e);
    }
    while(!v.empty()){
      i=v.size()-1;
      while(true){
          if(v[i]>i+1){
              cout << -1 <<endl;
              return 0;
          }
          if(v[i]==i+1){
            ans.push_back(i+1);
            v.erase(v.begin()+i);
            i=v.size()-1;
            break;
          }
          i--;
        }
      }
    for(auto it=ans.rbegin();it!=ans.rend();++it){
      cout << *it <<endl;
    }
    return 0;
}
