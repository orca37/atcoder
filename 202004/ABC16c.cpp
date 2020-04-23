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
    ll a,b;
    ll i,j,k;
    ll p[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            p[i][j]=0;
        }
    }
    for(i=0;i<M;i++){
        cin >> a >> b;
        p[a-1][b-1]=1;
        p[b-1][a-1]=1;
    }
    ll cnt,tmp;
    for(i=0;i<N;i++){
        cnt=0;
        for(j=0;j<N;j++){
            tmp=0;
           for(k=0;k<N;k++){
                if(i!=j&&p[i][j]==0&&p[i][k]==1&&p[k][j]==1)tmp=1;
            }
            cnt+=tmp;
        }   
        cout << cnt << endl;
    }
    return 0;
}
