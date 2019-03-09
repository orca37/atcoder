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
    ll C[N-1],S[N-1],F[N-1];
    ll i,j;
    for(i=0;i<N-1;i++){
      cin >> C[i] >> S[i] >> F[i];
    }
    ll ans;
    for(i=0;i<N-1;i++){
      ans=0;
      for(j=i;j<N-1;j++){
        if(ans<=S[j]){
          ans=C[j]+S[j];
        }else{
          ans=(ans+F[j]-1)/F[j]*F[j]+C[j];
        }
      }
      cout << ans<<endl;
    }
    cout << 0;
    return 0;
}
