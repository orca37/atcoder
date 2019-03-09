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
  ll N;
  cin >> N;
  ll a,b,r,t;
  cin >>a;
  ll i;
  for(i=0;i<N-1;i++){
    cin >> b;
    if(a>b){
      t=b;
      b=a;
      a=t;
    }
    while(b%a!=0){
      r=b%a;
      b=a;
      a=r;
    }
  }
  cout << a;
  return 0;
}
