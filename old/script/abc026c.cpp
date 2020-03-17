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
    ll N,i;
    cin >> N;
    vectorv <double> v;
    double a;
    for(i=0;i<N;i++){
      cin >> a;
      v.push_back(a);
    }
    sort(v[0],v[N-1]);
    double ans=v[0];
    for(i=1;i<N-1;i++){
      ans=(ans+v[i])/2.0;
    }
    return 0;
}
