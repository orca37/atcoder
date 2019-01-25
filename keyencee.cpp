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
    ll N,D;
    cin >> N >> D;
    ll A[N];
    ll i;
    ll ans=(N-1)*D;
    for(i=0;i<N;i++){
      cin >> A[i];
      ans+=2*A[i];
    }
    ll r[N];
    r[N-1]=A[N-1];
    for(i=N-2;i>=1;i--){
      r[i]=A[i]-(N-i-1)*D;
      if(r[i+1]>r[i])r[i]=r[i+1];
    }
    ll de=A[0]+r[1];
    for(i=1;i<N-1;i++){
      if(de<A[i]+r[i+1]-D*i)de=A[i]+r[i+1]-D*i;
    }
    ans-=de;
    cout << ans;
    return 0;
}
