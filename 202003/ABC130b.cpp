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
    ll N,X,L;
    cin >> N >> X;
    ll H=0,ans=1,i;
    for(i=0;i<N;i++){
        cin >> L;
        H+=L;
        if(H<=X)ans++;
    }
    cout << ans;
    return 0;
}