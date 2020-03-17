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
	ll N,P;
    cin >> N;
    ll i;
    ll mn=N+1;
    ll ans=0;
    for(i=0;i<N;i++){
        cin >> P;
        if(mn>P){mn=P;ans++;}
    }
    cout << ans;
    return 0;
}
