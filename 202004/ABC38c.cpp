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
    ll i,j;
    ll a[N],cnt=0,ans=0;
    cin >> a[0];
    for(i=1;i<N;i++){
       cnt++;
       cin >> a[i];
       if(a[i]<=a[i-1]){
            ans+=(cnt+1)*cnt/2;
            cnt=0;         
       }
    }
    cnt++;
    ans+=(cnt+1)*cnt/2;
    cout << ans;
    return 0;
}
