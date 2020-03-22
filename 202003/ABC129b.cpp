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
    ll ans;
    ll sum[N],W;
    cin >> W;
    sum[0]=W;
    for(i=1;i<N;i++){
        cin >> W;
        sum[i]=sum[i-1]+W;
    }
    ans=sum[N-1];
    for(i=0;i<N;i++){
        ans=min(ans,abs(sum[N-1]-2*sum[i]));
    }
    cout << ans;
    return 0;
}