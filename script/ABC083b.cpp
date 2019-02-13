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
    ll N,A,B;
    cin >> N >> A >> B;
    ll i;
    ll tmp,cnt,ans=0;
    for(i=1;i<=N;i++){
      tmp=i;
      cnt=0;
      while(tmp!=0){
        cnt+=tmp%10;
        tmp=tmp/10;
      }
      if(A<=cnt&&cnt<=B)ans+=i;
    }
    cout << ans;
    return 0;
}
