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
    ll A[N],C[N];
      ll i;
    for(i=0;i<N;i++){
      cin >> A[i];
      C[i]=0;
    }
    sort(A,A+N);
    ll tcnt=0,t=A[0];
    for(i=0;i<N;i++){
      if(t==A[i]){
        C[tcnt]+=1;
      }else{
        t=A[i];
        tcnt+=1;
        C[tcnt] =1;
      }
    }
    sort(C,C+N);
    ll ans=N;
    for(i=0;i<K;i++){
      ans-=C[N-1-i];
    }
    cout << ans;
    return 0;
}
