#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll i;
    ll a[N];
    ll dp[N];
   
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    dp[0]=0;
    dp[1]=abs(a[1]-a[0]);
    for(i=2;i<N;i++){
        dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
    }
    cout << dp[N-1]<<endl;
    return 0;
}
