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
    ll ans=0;
    cin >> N >>M;
    ll i=0;
    for(i=N;i<=M;i++){
      if(i/10000==i%10 && i/1000%10==i/10%10)ans++;
    }
    cout << ans;
    return 0;
}
