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
  int a,b;
  cin >> a >> b;
  cout << (min(a,b)+1)*max(a,b)<<endl;
  return 0;
}
