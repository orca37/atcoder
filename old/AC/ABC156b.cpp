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
using namespace std;
#define ll long long
int main(){
	ll A,B;
    cin >> A >> B;
    ll ans=1;
    ll tmp=B;
    while(tmp<=A){
        tmp*=B;
        ans++;
    }
    cout << ans <<endl;
    return 0;
}
