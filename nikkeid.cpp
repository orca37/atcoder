#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<set>
using namespace std;
#define ll long long
int main(){
    ll n,m;
    cin >> n >>m;
    vector < set<ll> > v1(n);
    vector < vector<ll> >v2(n);
    queue<ll> q;
    ll ans[n];
    ll tmpsize[n];
    ll tmp;
    ll a,b;
    ll i;
    for(i=0;i<n+m-1;i++){
      cin >> a >> b;
      v1[b-1].insert(a);
      v2[a-1].push_back(b);
    }
    for(i=0;i<n;i++){
      tmpsize[i]=v1[i].size();
      cout << i+1<<"size"<<v1[i].size()<<endl;
      if(tmpsize[i]==0){
        q.push(i);
        ans[i]=0;
      }
    }
    while(q.size()!=0){
      tmp=q.front();
      q.pop();
      cout << tmp <<" start" <<endl;
      for(i=0;i<v2[tmp].size();i++){
        cout <<"   " << v2[tmp][i] << "search" <<endl;
        tmpsize[v2[tmp][i]-1]--;
        if(tmpsize[v2[tmp][i]-1]==0){
          q.push(v2[tmp][i]);
          cout <<"   " << v2[tmp][i] <<" push" <<endl;
          ans[i]=tmp;
        }
      }
    }
    for(i=0;i<n;i++){
      cout << ans[i]<<endl;
    }
    return 0;
}
