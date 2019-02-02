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
    ll N,M,X;
    cin >> N >> M >> X;
    ll a=0,b=0;
    ll A;
    ll i;
    for(i=0;i<M;i++){
      cin >> A;
      if(A<X)a++;
      if(A>X)b++;
    }
    cout << min(a,b);
    return 0;
}
