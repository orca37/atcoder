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
    cin >> N >> K;
    ll ans =0;
    ans+=pow((N/K),3);
    if((K%2==0)&&(N>=K/2)){
      ans+=pow((N-(K/2))/K+1,3);
    }
    cout << ans;
}
