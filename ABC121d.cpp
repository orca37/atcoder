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
    ll A,B;
    cin >> A >> B;
    ll tmp=2;
    ll i;
    ll ans=0;
    ll num;
    ll zero=0;
    for(i=0;i<40;i++){
      num=B/tmp*tmp/2+max(zero,B%tmp-tmp/2+1);
      num-=(A-1)/tmp*tmp/2+max(zero,(A-1)%tmp-tmp/2+1);
      num=num%2;
      ans+=num*tmp/2;
      tmp*=2;
    }
    if(A!=B)cout << ans;else cout << A;
    return 0;
}
