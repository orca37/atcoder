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
    ll t1=1,t2=1;
    ll cnt1=1,cnt2=1,ans=0;
    ll i;
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    for(i=0;i<N-1;i++){
        if(t1*A[i]<t1*A[i+1]){
            cnt1++;
            t1*=-1;
        }
        if(t2*A[i]>t2*A[i+1]){
            cnt2++;
            t2*=-1;
        }
    }
    ans=max(cnt1,cnt2);
    if(ans<=2)ans=0;
    cout << ans <<endl;
    return 0;
}
