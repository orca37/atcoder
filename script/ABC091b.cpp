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
    ll N,M;
    cin >> N;
    ll i,j;
    string A[N];
    for(i=0;i<N;i++){
      cin >> A[i];
    }
    cin >>M;
    string B[M];
    for(i=0;i<M;i++){
      cin >> B[i];
    }
    ll ans=0;
    ll tmp;
    for(i=0;i<N;i++){
      tmp=0;
      for(j=0;j<N;j++){
        if(A[i]==A[j])tmp++;
      }
      for(j=0;j<M;j++){
        if(A[i]==B[j])tmp--;
      }
      ans=max(tmp,ans);
    }
    cout << ans;
    return 0;
}
