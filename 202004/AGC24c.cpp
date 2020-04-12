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
    ll N;
    cin >> N;
    ll a,b,i,ans;
    a=0;
    for(i=0;i<N;i++){
        cin >> b;
        if(b>a+1){
            cout << -1 << endl;
            return 0;
        }
        if(b==a+1)ans++;else ans+=b;
        a=b;
    }
    cout << ans;
    return 0;
}
