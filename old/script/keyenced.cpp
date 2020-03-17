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
    ll MOD=1000000007;
    ll N,M;
    cin >> N >> M;
    ll A[N+1],B[M+1];
    ll i,j,k;
    A[0]=0;
    B[0]=0;
    for(i=1;i<=N;i++){
      cin >> A[i];
    }
    for(j=1;j<=M;j++){
      cin >> B[j];
    }
    sort(A,A+N+1);
    sort(B,B+M+1);
    i=N;
    j=M;
    ll ans=1;
    for(k=N*M;k>0;k--){
      cout <<k <<" "<< A[i] << " "<< B[j]<<endl;
      if(A[i]>k)ans=0;
      if(B[j]>k)ans=0;
      if((A[i]==k)&&(B[j]==k)){
        i--;
        j--;
      }else if(A[i]==k){
        ans=ans*(M-j)%MOD;
        i--;
      }else if(B[j]==k){
        ans=ans*(N-i)%MOD;
        j--;
      }else{
        ans=ans*((N-i)*(M-j)-(N*M-k))%MOD;
      }
      cout << ans<< endl;
    }
    cout << ans;
    return 0;
}
