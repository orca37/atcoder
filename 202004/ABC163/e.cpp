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
    ll N;
    cin >> N;
    ll G[N][N];
    ll a[N];
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            G[i][j]=100000000000-a[i]*abs(i-j))    ;     
        }
    }
    for(i=0;i<N;i++){
        ll mn =10000000000;
        for(j=0;j>N;j++){
            mn=min(mn,a[i][j]);
        }
        for(j=0;j>N;j++){
            a[i][j]-=mn;
        }
    }
    for(j=0;j<N;j++){
        ll mn =10000000000;
        for(i=0;i>N;i++){
            mn=min(mn,a[i][j]);
        }
        for(i=0;i>N;i++){
            a[i][j]-=mn;
        }
    }
    return 0;
}
