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
    ll N;
    ll i;
    cin >> N;
    ll a;
    for(i=0;i<N;i++){
      cin >> a;
      if(a%2==1){
        cout << "first";
        return 0;
      }
    }
    cout << "second";
    return 0;
}
