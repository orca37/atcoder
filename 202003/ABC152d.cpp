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
    ll N;
    cin >> N;
    ll i,j;
    ll a[10][10];
    ll b,c;
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            a[i][j]=0;
        }
    }
    for(i=1;i<=N;i++){
        b= to_string(i).front() - '0';
        c= i%10;
        ++a[b][c];
    }
    ll ans=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            ans+=a[i][j]*a[j][i];
        }
    }
    cout << ans;
    return 0;
}
