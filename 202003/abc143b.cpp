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
    ll d[N];
    ll i,j;
    for(i=0;i<N;i++){
        cin >> d[i];
    }
    ll ans=0;
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            ans+=d[i]*d[j];
        }
    }
    cout << ans;
    return 0;
}
