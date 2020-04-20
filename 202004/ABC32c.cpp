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
    ll N,K;
    cin >> N >> K;
    ll i,j;
    ll a[N];
    for(i=0;i<N;i++){
        cin >> a[i];
        if(a[i]==0){
            cout << N <<endl;
            return 0;
        }
    }
    ll ans=0;
    j=0;
    ll tmp=1;
    for(i=0;i<N;i++){
        while(tmp<=K&&j<N){
            tmp*=a[j];
            if(tmp<=K)ans=max(ans,j-i+1);
            j++;
        }
        tmp=tmp/a[i];
        if(tmp==0)tmp=1;
    }
    cout << ans << endl;
    return 0;
}
