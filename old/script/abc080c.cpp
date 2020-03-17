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
    ll i,j,k;
    bool F[N][10];
    ll P[N][11];
    for(i=0;i<N;i++){
      for(j=0;j<10;j++){
        cin >> F[i][j];
      }
    }
    for(i=0;i<N;i++){
      for(j=0;j<11;j++){
        cin >> P[i][j];
      }
    }
    bool x[10];
    int t;
    ll cnt[N];
    ll mx=-1000000000000,tmp;

    for(i=1;i<1024;i++){
      t=i;
      tmp=0;
      for(j=0;j<N;j++){
        cnt[j]=0;
      }
      for(k=0;k<10;k++){
        x[k]= t%2;
        t= t/2;
      }
      for(j=0;j<N;j++){
        for(k=0;k<10;k++){
          cnt[j]+=F[j][k]*x[k];
        }
      }
      for(j=0;j<N;j++){
        tmp=tmp+P[j][cnt[j]];
      }
      mx=max(mx,tmp);
    }
    cout << mx;
    return 0;
}
