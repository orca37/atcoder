#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
using namespace std;
#define ll long long
int main(){
  ll N,A,B,C;
  cin >> N >> A >> B >> C;
  ll ans=100000;
  ll i,j;
  ll setl[4];
  ll sizel[4];
  ll tmp;
  ll x;
  ll t;
  ll l[N];
  for(i=0;i<N;i++){
    cin >> l[i];
  }
  for(i=0;i<pow(4,N);i++){
    t=i;
    for(j=0;j<4;j++){
      setl[j]=0;
      sizel[j]=0;
    }
    for(j=0;j<N;j++){
      x=t%4;
      setl[x]+=l[j];
      sizel[x]+=1;
      t=t/4;
    }
    if(sizel[0]!=0&&sizel[1]!=0&&sizel[2]!=0){
      tmp=abs(A-setl[0])+abs(B-setl[1])+abs(C-setl[2])+10*(sizel[0]+sizel[1]+sizel[2]-3);
      ans=min(tmp,ans);
    }
  }
  cout << ans;
}
