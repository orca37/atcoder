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
    ll N,K,i;
    cin >> N >>K;
    ll h[N];
    ll tmp;
    ll ans=1000000000;
    for(i=0;i<N;i++){
      cin >> h[i];
    }
    sort(h,h+N);
    for(i=0;i<N-K+1;i++){
      tmp=h[i+K-1]-h[i];
      if(tmp<ans)ans=tmp;
    }
    cout << ans;
    return 0;
}
