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
    ll K,A,B;
    cin >> K >> A >> B;
    ll ans;
    ll ans1=K+1;
    ll ans2;
    if(K>=A+1){
      K=K-A+1;
      ans2=A+(B-A)*(K/2)+K%2;
    }
    ans=max(ans1,ans2);
    cout << ans;
    return 0;
}
