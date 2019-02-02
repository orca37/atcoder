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
    ll i,j,k;
    i=0;
    j=0;
    ll a[N],m[N],p[N];
    a[0]=0;
    m[0]=0;
    p[0]=0;
    ll tmp;
    for(k=0;k<N;k++){
      cin >> tmp;
      if(tmp<0){
        i++;
        a[i]=-tmp;
      }
      if(tmp>=0){
        j++;
        p[j]=tmp;
      }
    }
    for(k=1;k<=i;k++){
        m[k]=a[i-k+1];
      }
    ll ans=10000000000000000;
    k=0;
    if(K>=j)k=K-j;
    while(k<=K && k<=i){
      if(m[k]+2*p[K-k]<ans)ans=m[k]+2*p[K-k];
      if(2*m[k]+p[K-k]<ans)ans=2*m[k]+p[K-k];
      k++;
    }
    cout << ans;
    return 0;
}
