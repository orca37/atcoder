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
    ll a[N+2];
    ll i;
    a[0]=0;
    a[N+1]=0;
    for(i=1;i<=N;i++){
      cin >> a[i];
    }
    ll sum=0;
    for(i=1;i<=N+1;i++){
      sum+=abs(a[i]-a[i-1]);
    }
    for(i=1;i<=N;i++){
      cout<< sum+abs(a[i+1]-a[i-1])-abs(a[i+1]-a[i])-abs(a[i]-a[i-1])<<endl;
    }
    return 0;
}
