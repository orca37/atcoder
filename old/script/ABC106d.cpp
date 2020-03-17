#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll N,M,Q;
    cin >> N >> M >> Q;
    ll L,R;
    ll p,q;
    ll i,j;
    ll sta[N][N],ans[N][N];
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
        sta[i][j]=0;
      }
    }
    for(i=0;i<M;i++){
      cin >> L >> R;
      sta[L-1][R-1]++;
    }
    for(i=0;i<N;i++){
      for(j=1;j<N;j++){
        sta[i][j]+=sta[i][j-1];
      }
    }
    for(j=N-1;j>=0;j--){
      for(i=j-1;i>=0;i--){
        sta[i][j]+=sta[i+1][j];
      }
    }
    for(i=0;i<Q;i++){
      cin >> p >> q;
      cout <<sta[p-1][q-1]<<endl;
    }
    return 0;
}
