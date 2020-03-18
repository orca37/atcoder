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
    ll N,L;
    cin >> N >> L;
    ll i,mn=500,ans=0;
    for(i=0;i<N;i++){
        ans+=L+i;
        if(abs(mn)>abs(L+i))mn=L+i;
    }
    cout << ans-mn;
    return 0;
}