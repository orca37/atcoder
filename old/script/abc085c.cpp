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
    ll N,Y;
    cin >> N >> Y;
    ll x,y,z;
    for(x=0;x<=N;x++){
      for(y=0;y<=N-x;y++){
        z=N-x-y;
        if(10000*x+5000*y+1000*z==Y){
          cout << x <<" "<< y <<" "<< z;
          return 0;
        }
      }
    }
    cout << -1 <<" "<< -1 <<" "<< -1;

    return 0;
}
