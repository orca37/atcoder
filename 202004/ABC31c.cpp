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
    ll i,j,k;
    ll a[N];
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    ll ak,tk,mxak,tmptk,ans;
    ans=-3000;
    for(i=0;i<N;i++){
        mxak=-3000;
        for(j=0;j<N;j++){
            ak=0;
            tk=0;
            if(i!=j){
                for(k=min(i,j);k<=max(i,j);k++){
                    if((k-min(i,j))%2==0)tk+=a[k];else ak+=a[k];
                }
                if(ak>mxak){
                    mxak=ak;
                    tmptk=tk;
                }
            }
        }
        ans=max(ans,tmptk);
    }
    cout << ans<<endl;
    return 0;
}
