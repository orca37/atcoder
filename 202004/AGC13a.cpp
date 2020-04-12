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
    ll i;
    ll ans=1;
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    ll n=0,m=0;
    for(i=1;i<N;i++){
        if(A[i]-A[i-1]>0)m=1;
        if(A[i]-A[i-1]<0)m=-1;
        if(n*m==-1){
            ans++;
            m=0;
        }
        n=m;
    }
    cout << ans;
}
