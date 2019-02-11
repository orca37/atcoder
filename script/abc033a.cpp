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
  int n,i;
  cin >>n;
  int div=1000;
  for(i=0;i<3;i++){
    if(n/div!=n%div/(div/10)){
      cout << "DIFFERENT"<<endl;
      return 0;
    }
    n%=div;
    div/=10;
  }
  cout << "SAME" <<endl;
  return 0;
}
