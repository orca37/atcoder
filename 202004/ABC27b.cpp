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
    ll i,sum=0;
    for(i=0;i<N;i++){
        cin >> a[i];
        sum+=a[i];
    }
    if(sum%N!=0){
        cout << -1 <<endl;
        return 0;
    }
    ll sum2=0,ans=0;;
    for(i=0;i<N;i++){
        sum2+=a[i];
        if(sum2!=sum/N*(i+1))ans++;
    }
    cout << ans << endl;
    return 0;
}