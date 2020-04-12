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
    ll N,T;
    cin >> N >> T;
    ll i,r=0,sum=0,t;
    for(i=0;i<N;i++){
        cin >> t;
        sum+=min(T,t+T-r);
        r=t+T;
    }
    cout << sum;
    return 0;
}
