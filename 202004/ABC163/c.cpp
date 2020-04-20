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
    cin >> N;
    ll ans[N];
    ll a,i;
    for(i=0;i<N;i++){
        ans[i]=0;
    }
    for(i=0;i<N-1;i++){
        cin >> a;
        ans[a-1]+=1;
    }
    for(i=0;i<N;i++){
        cout << ans[i] <<endl;
    }
    return 0;
}
