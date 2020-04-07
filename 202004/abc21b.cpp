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
    ll N,i;
    cin >> N;
    ll a,b;
    cin >> a >> b;
    ll K;
    cin >> K;
     ll A[N+2];
    for(i=0;i<K;i++){
        cin >> A[i];
    }
    A[K]=a;
    A[K+1]=b;
    sort(A,A+K+2);
    bool flag=1;
    for(i=0;i<K+1;i++){
        if(A[i+1]==A[i])flag=0;
    }
    cout << (flag?"YES":"NO") <<endl;
    return 0;
}