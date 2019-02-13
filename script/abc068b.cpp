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
    ll N,ans;
    cin >> N;
    ans=1;
    while(ans*2<=N){
      ans*=2;
    }
    cout << ans;
    return 0;
}
