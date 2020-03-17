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
    ll i;
    ll a[N];
    a[0]=0;
    for(i=1;i<N;i++){
      if(s[i-1]=='A' && s[i]=='C')a[i]=a[i-1]+1;else a[i]=a[i-1];
    }
    ll l,r;
    for(i=0;i<Q;i++){
      cin >> l >> r;
      cout <<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}
