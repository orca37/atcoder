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
    ll N,D;
    cin >> N >> D;
    ll i,j,k;
    ll X[N][D];
    for(i=0;i<N;i++){
        for(j=0;j<D;j++){
            cin >> X[i][j];
        }
    }
    ll tmp,a,ans=0;
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            tmp=0;
            for(k=0;k<D;k++){
                tmp+=pow(X[i][k]-X[j][k],2);
            }
             a=(int) sqrt(tmp);
             if(tmp==a*a)ans++;
        }
    }
    cout << ans;
    return 0;
}