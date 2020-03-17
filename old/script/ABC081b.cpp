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
    ll N,A,i,cnt,ans=100000;
    cin >> N;
    for(i=0;i<N;i++){
      cin >> A;
      cnt=0;
      while(A%2==0){
        A/=2;
        cnt++;
      }
      ans=min(ans,cnt);
    }
    cout << ans;
    return 0;
}
