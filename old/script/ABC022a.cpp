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
    ll N,S,T,W,A;
    cin >> N >> S >> T >>W;
    ll i,ans=0;
    if(S<=W&&W<=T)ans++;
    for(i=1;i<N;i++){
      cin >> A;
      W+=A;
      if(S<=W&&W<=T)ans++;
    }
    cout << ans <<endl;
    return 0;
}
