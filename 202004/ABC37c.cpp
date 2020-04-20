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
    cin >> N>> K;
    ll i,j;
    ll a,ans=0;
    for(i=0;i<N;i++){
       cin >> a;
       ans+=a*(min(i,N-K)-max(i-K+1,(ll)0)+1);
    }
    cout << ans <<endl;
    return 0;
}
