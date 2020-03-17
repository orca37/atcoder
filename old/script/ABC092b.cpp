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
    ll N,D,X;
    cin >> N >> D >> X;
    ll i;
    ll A;
    for(i=0;i<N;i++){
      cin >> A;
      X+=(D-1)/A+1;
    }
    cout << X;
    return 0;
}
