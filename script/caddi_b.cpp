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
    ll n,a,b;
    cin >> n >> a >> b;
    ll i,cnt,ta,tb;
    for(i=0;i<n;i++){
      cin>>ta >>tb;
      if(ta>=a && tb>=b)cnt++;
    }
    cout <<cnt;
    return 0;
}
