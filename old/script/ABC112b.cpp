#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
  int N,T;
  cin >> N >> T;
  int min=2000;
  int i;
  int t,c;
  for(i=0;i<N;i++){
    cin >> c >> t;
    if((c<min)&&(t<=T)){
      min = c;
    }
  }
  if(min==2000){
    cout << "TLE";
  }else{
    cout << min;
  }
  return 0;
}
