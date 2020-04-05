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
    ll t,sum=0;
    string S;
    ll i;
    cin >> N;
    ll mx=0;
    string mxS;
    for(i=0;i<N;i++){
        cin >> S >> t;
        sum+=t;
        if(mx<t){
            mxS=S;
            mx=t;
        }
    }
    if(sum>=2*mx)cout <<"atcoder"<<endl;else cout << mxS <<endl;
    return 0;
}