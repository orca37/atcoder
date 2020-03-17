#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll x[N],y[N],h[N];
    ll i,j,k;
    ll nonzero;
    ll tmp;
    for(k=0;k<N;k++){
      cin >> x[k] >> y[k] >> h[k];
      if(h[k]>0)nonzero=k;
    }
    ll H[101][101];
    for(i=0;i<=100;i++){
      for(j=0;j<=100;j++){
        H[i][j]=h[nonzero]+abs(x[nonzero]-i)+abs(y[nonzero]-j);
      }
    }
    for(k=0;k<N;k++){
      for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
          if(H[i][j]!=-1){
            tmp=H[i][j]-abs(x[k]-i)-abs(y[k]-j);
            if((h[k]==0)&&(tmp>0))H[i][j]=-1;
            if((h[k]>0)&&(tmp!=h[k]))H[i][j]=-1;
          }
        }
      }
    }
    for(i=0;i<=100;i++){
      for(j=0;j<=100;j++){
        if(H[i][j]>0)cout << i <<" "<< j <<" "<< H[i][j] << endl;
      }
    }
    return 0;
}
