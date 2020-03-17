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
  int a,b,n;
  cin >> a >> b >> n;
  while(n%a!=0|n%b!=0){
    n++;
  }
  cout << n<<endl;
  return 0;
}
