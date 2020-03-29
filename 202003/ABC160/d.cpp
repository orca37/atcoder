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
    ll N,X,Y;
    cin >> N >> X >>Y;
    ll ans[N];
    ll i,j;
    for(i=0;i<N;i++){
        ans[i]=0;
    }
    for(i=1;i<N;i++){
        for(j=i+1;j<=N;j++){
            if(i<X&&j<X)++ans[j-i];
            if(i>Y&&j>Y)++ans[j-i];
            if(i<X&&j>Y)++ans[j-Y+X-i+1];
            if(i<X&&j>=X&&j<=Y)++ans[X-i+min(Y-j+1,j-X)];
            if(i>=X&&i<=Y&&j<=Y)++ans[min(j-i,Y-j+i-X+1)];
            if(i>=X&&i<=Y&&j>Y)++ans[min(j-i,j-Y+i-X+1)];
        }
    }
    for(i=1;i<N;i++){
        cout << ans[i] <<endl;
    }
    return 0;
}
