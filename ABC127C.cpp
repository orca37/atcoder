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
    ll N,M,i;
    cin >> N >> M;
    ll L=0,R=N;
    ll tL,tR;
    for(i=0;i<M;i++){
        cin >> tL >> tR;
        L=max(tL,L);
        R=min(tR,R);
    }
    cout << max(R-L+1,(ll) 0);
    return 0;
}
