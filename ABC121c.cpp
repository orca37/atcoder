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
    cin >> N >> M;
    pair <ll,ll> a[N];
    ll i;
    for(i=0;i<N;i++){
      cin>> a[i].first >>a[i].second;
    }
    sort(a,a+N);
    i=0;
    ll ans=0;
    while(M>0){
      ans+=a[i].first*min(M,a[i].second);
      M=M-a[i].second;
      i++;
    }
    cout << ans;
    return 0;
}
