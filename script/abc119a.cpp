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
  string s;
  cin >> s;
  if(s[5]=='1'||s[6]>'4')cout << "TBD";else cout << "Heisei";
  return 0;
}
