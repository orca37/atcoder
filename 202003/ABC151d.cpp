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
    ll i,j,k,l;
    string S[H];
    for(i=0;i<H;i++){
        cin >> S[i];
    } 
    ll d[H*W][H*W];
    for(i=0;i<H*W;i++){
        for(j=0;j<H*W;j++){
             d[i][j]=100000;
        }
    }
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            if(i!=H-1&&S[i][j]=='.'&&S[i+1][j]=='.'){
                d[i*W+j][(i+1)*W+j]=1;
                d[(i+1)*W+j][i*W+j]=1;
            }
            if(j!=W-1&&S[i][j]=='.'&&S[i][j+1]=='.'){
                d[i*W+j][i*W+j+1]=1;
                d[i*W+j+1][i*W+j]=1;
            }
            d[i*W+j][i*W+j]=0;
        }
    }
    for(k=0;k<H*W;k++){
        for(i=0;i<H*W;i++){
            for(j=0;j<H*W;j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    ll ans=0;
    for(i=0;i<H*W;i++){
        for(j=0;j<H*W;j++){
            if(S[i/W][i%W]=='.'&&S[j/W][j%W]=='.'){
                ans=max(ans,d[i][j]);
            }
        }
    }
    cout << ans;
}