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
    ll a,b;
    cin >> a >> b;
    ll ans=0;
    while(a<=b){
      a=2*a;
      ans++;
    }
    cout << ans;
    return 0;
}
