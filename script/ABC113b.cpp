#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    int N;
    long double T,A,H;
    cin >> N >> T >> A;
    int ans;
    long double min=10000000;
    long double tmp;
    int i;
    for(i=0;i<N;i++){
      cin >> H;
      tmp=fabs(T-H*0.006-A);
      if(min>tmp){
        min=tmp;
        ans=i+1;
      }
    }
    cout <<ans;
    return 0;
}
