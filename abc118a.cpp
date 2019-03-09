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
  int A,B;
  cin >> A >> B;
  if(B%A==0)cout << A+B;else cout <<B-A;
  return 0;
}
