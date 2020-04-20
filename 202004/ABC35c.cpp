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
    ll N,Q;
    cin >> N >> Q;
    ll a[N+1];
    ll i;
    for(i=0;i<=N;i++){
        a[i]=0;
    }
    ll l,r;
    for(i=0;i<Q;i++){
        cin >> l >> r;
        a[l-1]+=1;
        a[r]-=1;
    }
    cout << a[0]%2;
    for(i=1;i<N;i++){
        a[i]+=a[i-1];
        cout << a[i]%2;
    }
    cout <<endl;
    return 0;
}
