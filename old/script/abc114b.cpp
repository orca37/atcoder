#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
  ll N;
  cin >> N;
  int min=999;
  int tmp;
  while(N>=100){
    tmp=abs(753-N%1000);
    if(min>tmp){
      min = tmp;
    }
  N=N/10;
  }
  cout << min;
  return 0;
}
