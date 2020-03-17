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
    vector <double> v;
    double a;
    for(i=0;i<N;i++){
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    double ans=v[0];
    for(i=1;i<N;i++){
      ans=(ans+v[i])/2.0;
    }
    cout << ans;
    return 0;
}
