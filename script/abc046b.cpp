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
    ll ans=K;
    for(ll i=1;i<N;i++){
      ans*=K-1;
    }
    cout << ans;
    return 0;
}
