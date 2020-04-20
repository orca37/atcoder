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
    ll N,M;
    cin >> N >> M;
    ll A[N][M];
    ll i,j,k;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            cin >> A[i][j];
        }
    }
    ll ans=0,tmp;
    for(i=0;i<M-1;i++){
        for(j=1;j<M;j++){
            tmp=0;
            for(k=0;k<N;k++){
                tmp+=max(A[k][i],A[k][j]);
            }
            ans=max(ans,tmp);
        }
    }
    cout << ans;
    return 0;
}
