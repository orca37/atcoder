#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N,P;
    cin >> N >> P;
    ll tmp=2;
    ll cnt;
    ll ans=1;
    if(N==1){
      cout << P;
    }else{
      cnt=0;
      while(P%tmp==0){
        P=P/tmp;
        cnt++;
      }
      ans*=pow(tmp,cnt/N);
      tmp=3;
      while(tmp*tmp<=P){
          cnt=0;
          while(P%tmp==0){
            P=P/tmp;
            cnt++;
          }
          ans*=pow(tmp,cnt/N);
          tmp+=2;
        }
        cout << ans;
      }
    return 0;
}
