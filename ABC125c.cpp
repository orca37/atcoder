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
ll gcd(a,b){
    ll t;
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    ll r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
int main(){
    ll N;
    cin >> N;
    A[N];
    ll i;
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    ll ans=1;
    ll L[N],R[N];
    L[0]=A[0];
    R[N-1]=A[N-1];
    for(i=1;i<N;i++){
        L[i]=gcd(L[i-1],A[i]);
        R[N-i-1]=gcd(R[N-i-1],A[N-i]);
    }
    for(i=1;i<N-1;i++){
        ans=max(ans,gcd(L[i-1],R[i+1]))
    }
    ans=max(ans,L[N]);
    ans=max(ans,R[0]);
    cout << ans;
    return 0;
}
