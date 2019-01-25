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
    ll N,K;
    cin >> N >> K;
    ll x[N];
    ll i;
    for(i=0;i<N;i++){
      cin >> x[i];
    }
    ll bdr=0;
    while(x[bdr]<0 && bdr<N)bdr++;
    ll mi[N];
    ll pl[N];
    mi[0]=0;
    i=1;
    while(i<=bdr){
      mi[i]=-x[bdr-i];
      i++;
    }
    pl[0]=0;
    i=1;
    while(bdr+i<=N){
      pl[i]=x[bdr+i-1];
      i++;
    }
    if(bdr<=K){
      i=bdr;
    }else{
      i=K;
    }
    ll ans=100000000;
    ll tmp;
    while(i>=0 && K-i<=N-bdr){
      tmp=2*mi[i]+pl[K-i];
      if(tmp<ans)ans=tmp;
      tmp=mi[i]+2*pl[K-i];
      if(tmp<ans)ans=tmp;
      i--;
    }
      cout <<ans;
    return 0;
}
