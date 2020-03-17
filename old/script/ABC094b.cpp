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
    ll a=0,b=0;
    ll A;
    for(i=0;i<M;i++){
      cin >> A;
      if(A<X)a++;
      if(X<N)b++;
    }
    cout << min(a,b);
    return 0;
}
