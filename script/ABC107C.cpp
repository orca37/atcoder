#include<iostream>
#include<string>
#include<cstdlib>
#include<typeinfo>
#include<vector>
#include<iomanip>
#include<cmath>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll N,K;
    cin >> N >>K;
    ll cntmns=0;
    ll i;
    ll x[N];
    ll a[N];
    ll b[N];
    for(i=0;i<N;i++){
      cin >> x[i];
      if(x<0){
        cntmns++;
      }
    }
    for(i=cntmns-1;;)
}
