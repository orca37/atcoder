#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
  int A,B,C;
  cin >> A >> B >>C;
  if(A+B<C){
    cout << "No";
  }else{
    cout << "Yes";
  }
}
