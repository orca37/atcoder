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
    string S;
    cin >> N >> S;
    ll i;
    ll w[N+1],b[N+1];
    w[0]=0;b[N]=0;
    for(i=1;i<=N;i++){
        if(S[i]=='#')w[i]=w[i-1]+1;
        if(S[N-i]=='.')b[N-i]=b[N-i+1]+1;
    }
    ll mx=N;
    for(i=0;i<=N+1;i++){
        mx=max(mx,w[i]+b[i]);
    }
    
    return 0;
}
