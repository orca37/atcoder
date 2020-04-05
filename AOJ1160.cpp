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
ll mp[100][100];
ll visited[100][100];
void dfs(ll w,ll h,ll i,ll j){
    ll a,b;
    visited[i][j]=1;
    for(a=i-1;a<=i+1;a++){
        for(b=j-1;b<=j+1;b++){
            if(a>=0&&a<h&&b>=0&&b<w&&mp[a][b]==1&&visited[a][b]==0)dfs(w,h,a,b);
        }
    }
    return ;
}

int main(){
    while(true){
        ll w,h;
        cin >> w >> h;
        if(w==0&&h==0) return 0;
        ll i,j;
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                cin >> mp[i][j];
                visited[i][j]=0;
            }
        }
        ll ans =0;
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if(mp[i][j]==1&&visited[i][j]==0){
                    ans++;
                    dfs(w,h,i,j);
                }
            }
        }
        cout << ans <<endl;
    }
}