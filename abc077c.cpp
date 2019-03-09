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
    ll N;
    cin >> N;
    ll A[N+1],B[N+1],C[N+1];
    ll i,j,k;
    A[0]=0;
    for(i=1;i<=N;i++){
      cin >> A[i];
    }
    B[0]=0;
    for(i=1;i<=N;i++){
      cin >> B[i];
    }
    C[0]=0;
    for(i=1;i<=N;i++){
      cin >> C[i];
    }
    ll ans=0;
    j=0;k=0;
    for(i=1;i<=N;i++){
      while(A[j]<B[i]&&j<=N){
        j++;
      }
      while(C[k]<B[i]&&k<=N){
        k++;
      }
_    }
    return 0;
}
