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
    ll H,W;
    cin >> H >> W;
    ll c[10][10];
    ll i,j,k;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            cin >> c[i][j];
        }
    }
    for(k=0;k<10;k++){
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
            }
        }
    }
    ll a;
    ll ans=0;
     for(i=0;i<H;i++){
            for(j=0;j<W;j++){
                cin >> a;
                if(a>=0)ans+=c[a][1];
            }
        }
    cout << ans << endl;
    return 0;
}
