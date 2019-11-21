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
    ll mod=1000000007;
    ll A[N],G[N],C[N],AG[N],AC[N],GA[N],AGG[N];
    A[0]=1,G[0]=1,C[0]=1,AG[0]=0,AC[0]=0,,GA[N]=0,AGG[0]=0;
    A[1]=1,G[1]=1,C[1]=1,AG[1]=0,AC[1]=0,,GA[1]=0,AGG[0]=0;
    for(i=2;i<N;i++){
      A[i]=;
      G[i]=;
      C[i]=;
      AG[i]=;
      AC[i]=;
      GA[i]=;
      AGG[i]=AG[i-1];
    }
    cout << A[N-1]+G[N-1]+C[N-1]+AG[N-1]+AC[N-1]+AGG[N-1];
    return 0;A
}
