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
    ll a[N];
    ll i,k;
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    ll ans=100000000,tmp;
    for(k=-100;k<=100;k++){
        tmp=0;
        for(i=0;i<N;i++){
            tmp+=(a[i]-k)*(a[i]-k);
        }
        ans=min(ans,tmp);
    }
    cout << ans;
    return 0;
}
