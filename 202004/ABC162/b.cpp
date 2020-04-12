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
    ll i;
    ll ans=0;
    for(i=1;i<=N;i++){
        if(i%3!=0&&i%5!=0)ans+=i;
    }
    cout << ans;
    return 0;
}
