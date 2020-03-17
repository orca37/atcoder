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
    cin >> N;
    ll X[N],Y[N];
    for(ll i=0;i<N;i++){
      cin >> X[i];
      Y[i]=X[i];
    }
    sort(Y,Y+N);
    for(ll i=0;i<N;i++){
      if(X[i]>=Y[N/2])cout <<Y[N/2-1]<<endl;else cout <<Y[N/2]<<endl;
    }
    return 0;
}
