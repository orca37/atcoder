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
    ll x[N],y[N];
    ll i,j,k;
    for(i=0;i<N;i++){
        cin >> x[i]>> y[i];
    }
    ll ans=0;
    ll a1,a2,b1,b2;
    for(i=0;i<N-2;i++){
        for(j=i+1;j<N-1;j++){
            for(k=j+1;k<N;k++){
                a1=x[j]-x[i];
                a2=y[j]-y[i];
                b1=x[k]-x[i];
                b2=y[k]-y[i];
                if((a1*b2-b1*a2)!=0&&(a1*b2-b1*a2)%2==0)ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
