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
    ll N,Q;
    cin >> N >> Q;
    string s;
    cin >> s;
    string t[Q],d[Q];
    ll i;
    for(i=0;i<Q;i++){
      cin >> t[i] >>d[i];
    }
    ll l=-1,r=N;
    ll tmp,j;
    bool death;
    ll ans=N;
    while(r-l>1){
      tmp=(r+l)/2;
      j=tmp;
      death=false;
      for(i=0;i<Q;i++){
        if(j>=0&&j<=N-1&&s[j]==t[i][0]){
            if(d[i][0]=='L')j--;else j++;
        }
        if(j<0)death=true;
      }
      if(death)l=tmp;else r=tmp;
    }
    ans-=l+1;
    l=-1;r=N;
    while(r-l>1){
      tmp=(r+l)/2;
      j=tmp;
      death=false;
      for(i=0;i<Q;i++){
        if(j>=0&&j<=N-1&&s[j]==t[i][0]){
            if(d[i][0]=='L')j--;else j++;
        }
        if(j>N-1)death=true;
      }
      if(death)r=tmp;else l=tmp;
    }
      ans-=N-r;
    if(ans<0)cout << 0;else cout << ans;
    return 0;
}
