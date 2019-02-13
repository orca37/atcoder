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
    ll l=1,r=1,tmp;
    while(r*r<N){
      l=r;
      r=2*r;
    }
    while(r-l>1){
      tmp=(l+r)/2;
      if(tmp*tmp>=N)r=tmp;
      if(tmp*tmp<=N)l=tmp;
    }
    if((l+1)*(l+1)<=N)l=l+1;
    cout << l*l <<endl;
    return 0;
}
