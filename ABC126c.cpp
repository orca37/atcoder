#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    double N,K;
    cin >> N >> K;
    double ans=1.0;
    double tmp=1.0;
    while(K>=1){
      if(K>=N)ans-=tmp/2.0;else ans-=tmp/2.0*floor(K)/N;
      tmp=tmp/2.0;
      K=K/2;
    }
    cout << setprecision(20)<<ans;
    return 0;
}
