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
    ll a,b;
    cin >> a >> b;
    ll bsize=10;
    while(b>=bsize){
      bsize*=10;
    }
    ll tnum = a*bsize+b;
    ll l=1,r=1;
    while(r*r<tnum){
      l=r;
      r*=2;
    }
    ll tmp;
    while(r-l<=1){
      cout << l << r;
      tmp=(l+r)/2;
      if(tmp*tmp<=tnum)l=tmp;
      if(tmp*tmp>=tnum)r=tmp;
    }
    if(l*l==tnum || r*r==tnum)cout <<"YES"<<endl;else cout <<"NO"<<endl;
    return 0;
}
