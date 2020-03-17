#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
  int N;
  cin >> N;
  int max=0,i,p,ans=0;
  for(i=0;i<N;i++){
    cin >>p;
    ans+=p;
    if(p>max)max=p;
  }
  cout << ans-max/2;
  return 0;
}
