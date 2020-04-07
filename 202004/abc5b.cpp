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
    ll i,a,ans=101;
    for(i=0;i<N;i++){
        cin >> a;
        ans=min(ans,a);
    }
    cout << ans << endl;
    return 0;
}