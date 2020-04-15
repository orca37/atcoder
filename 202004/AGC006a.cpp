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
    string s,t;
    cin >> N >> s >> t;
    ll i;
    for(i=N-1;i>=0;i--){
        if(s.substr(N-i-1,i+1)==t.substr(0,i+1)){
            cout << 2*N-(i+1);
            return 0;
        }
    }
    cout << 2*N;
    return 0;
}
