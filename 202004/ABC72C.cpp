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
#include<bitset>
#include<math.h>
using namespace std;
#define ll long long

int main(){
    ll N;
    cin >> N;
    ll i;
    ll A[N];
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    sort(A,A+N);
    ll a=0,b=0,c=1;
    ll t=A[0];
    ll ans=1;
    for(i=1;i<N;i++){
        if(A[i-1]==A[i])c++;
        if(A[i-1]+1==A[i]){
            a=b;
            b=c;
            c=1;
        }
        if(A[i-1]+2==A[i]){
            a=c;
            b=0;
            c=1;
        }
        if(A[i-1]+2<A[i]){
            a=0;
            b=0;
            c=1;
        }
        ans=max(ans,a+b+c);
    }
    cout << ans;
    return 0;
}
