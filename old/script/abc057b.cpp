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
    ll n,m;
    cin >> n >> m;
    ll a[n],b[n],c[m],d[m];
    ll i,j;
    for(i=0;i<n;i++){
      cin >> a[i]>>b[i];
    }
    for(j=0;j<m;j++){
      cin >> c[j]>>d[j];
    }
    ll tmp,ans=0;
    for(i=0;i<n;i++){
      tmp=10000000000000;
      for(j=0;j<m;j++){
        if(tmp>abs(a[i]-c[j])+abs(b[i]-d[j])){
          tmp=abs(a[i]-c[j])+abs(b[i]-d[j]);
          ans=j;
        }
      }
      cout << ans+1<<endl;
    }
    return 0;
}
