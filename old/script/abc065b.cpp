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
    ll n;
    cin >> n;
    ll a[n],pushed[n];
    ll i;
    for(i=0;i<n;i++){
      cin >> a[i];
      pushed[i]=0;
    }
    i=0;
    ll cnt=0;
    while(i!=1){
      if(pushed[i]==1){
          cout << -1;
          return 0;
      }
      pushed[i]=1;
      i=a[i]-1;
      cnt++;
    }
    cout << cnt;
    return 0;
}
