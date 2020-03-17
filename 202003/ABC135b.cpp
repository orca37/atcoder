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
    ll N,p;
    cin >> N;
    ll i,cnt=0;
    for(i=0;i<N;i++){
        cin >> p;
        if(i+1!=p)cnt++;
    }
    if(cnt<=2)cout <<"YES";else cout <<"NO";
    return 0;
}
