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
    ll a[N];
    ll i;
    for(i=0;i<N;i++){
      cin >> a[i];
    }
    sort(a,a+N);
    ll ans=0;
    ll tmp=0;
    for(i=0;i<N;i++){
      if (tmp!=a[i])ans++;
      tmp = a[i];
    }
    cout << ans <<endl;
    return 0;
}
