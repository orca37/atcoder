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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    double C[1001][1001];
    C[0][0]=1.0;
    ll i,j;
    for(i=1;i<=1000;i++){
        C[i][0]=C[i-1][0]*0.5;
        C[i][i]=C[i-1][i-1]*0.5;
        for(j=1;j<i;j++){
            C[i][j]=C[i-1][j-1]*0.5+C[i-1][j]*0.5;
        }
    }
    ll N,D,X,Y;
    cin >> N >> D >> X >> Y;
    if(X%D==0&&Y%D==0&&(N-abs(X)/D-abs(Y)/D)%2==0){
        X=abs(X)/D;
        Y=abs(Y)/D;
    }else{
        cout << 0.0;
        return 0;
    }
    double ans=0.0;
    for(i=X;i<=N-Y;i+=2){
        ans+=C[N][i]*C[i][(i-X)/2]*C[N-i][(N-Y-i)/2];
    }
    cout << setprecision(15) << ans <<endl;
    return 0;
}
