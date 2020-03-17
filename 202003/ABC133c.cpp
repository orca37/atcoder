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
    ll L,R;
    cin >> L >> R;
    ll ans;
    if(R-L>2019)ans=0;
    else{
        ll i,j;
        ans=2019;
        for(i=L;i<=R-1;i++){
            for(j=i+1;j<=R;j++){
                ans=min(ans,i*j%2019);
            }
        }
    }
    cout << ans;
    return 0;
}