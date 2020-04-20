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
#define MOD 1000000007
int main(){
    ll H,W;
    cin >> H >>W;
    string S[H];
    ll i,j,k;
    for(i=0;i<H;i++){
        cin >> S[i];
    }
    ll cnt,mn;
    ll a[H+1][W+1],b[H+1][W+1];
    for(i=0;i<H;i++){
        cnt=0;
        mn=0;
        for(j=0;j<=W;j++){
            if(j<W&&S[i][j]=='.')cnt++;else{
                for(k=mn;k<j;k++){
                    a[i][k]=cnt;
                }
                a[i][j]=0;
                cnt=0;
                mn=j+1;
            }
        }
    }
    for(j=0;j<W;j++){
        cnt=0;
        mn=0;
        for(i=0;i<=H;i++){
            if(i<H&&S[i][j]=='.')cnt++;else{
                for(k=mn;k<i;k++){
                    b[k][j]=cnt;
                }
                b[i][j]=0;
                cnt=0;
                mn=i+1;
            }
        }
    }
    ll ans=0;
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            ans=max(ans,a[i][j]+b[i][j]-1);
        }
    }
    cout << ans;
    return 0;
}
