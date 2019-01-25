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
    ll L,N;
    cin >> L >> N;
    ll i;
    ll a[N+2];
    a[0]=0;
    a[N+1]=L;
    for(i=1;i<=N;i++){
      cin >> a[i];
    }
    ll le[N+1],ri[N+1];
    le[0]=0;
    ri[0]=0;
    for(i=1;i<=N;i++){
      le[i]=le[i-1]+a[i-1]+a[i];
      ri[i]=ri[i-1]+2*L-a[N-i+1]-a[N-i+2];
    }
    ll lp[N+1],rp[N+1],lm[N+1],rm[N+1],p[i],m[i];
    lp[1]=;

    for(i=1;i<=N;i++){
      lp[i]=a[i-1]+L-a[i];
      rp[i]=a[i]-a[i-1];
      if(lp[i]>rp[i]){
        p[i]=lp[i];
      }else{
        p[i]=rp[i];
      }
      lm[i]=a[i+1]-a[i];
      rm[i]=a[i]+L-a[i+1];
      if(lm[i]>rm[i]){
        m[i]=lm[i];
      }else{
        m[i]=rp[i];
      }
    }
    ll ans = 0;
    ll tmp;
    for(i=1;i<=N;i++){
      if(i<=N-i-1){
        tmp = ;
      }else{
        tmp = ;
      }






    }
    cout << ans;
    return 0;
}
