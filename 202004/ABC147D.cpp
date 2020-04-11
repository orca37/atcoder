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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll A[N];
    ll i,j;
    ll MOD=1000000007;
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    ll c,t=1,ans=0;
    for(i=0;i<=60;i++){
        c=0;
        for(j=0;j<N;j++){
            c+=A[j]%2;
            A[j]=A[j]/2;
        }
        ans=(ans+c*(N-c)%MOD*t%MOD)%MOD;
        t=t*2%MOD;
    }
    cout << ans <<endl;
    return 0;
}
