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
	ll N,i,j;
    cin >> N;
    ll X[N];
    for(i=0;i<N;i++){
        cin >> X[i];
    }
    ll ans = 10000000;
    ll tmp;
    for(j=1;j<=100;j++){
        tmp=0;
        for(i=0;i<N;i++){
            tmp+=pow(X[i]-j,2);
        }
        ans=min(ans,tmp);
    }
    cout << ans;
    return 0;
}
