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
    ll N,A,B,d,i;
    cin >> N >> A >> B;
    string s;
    ll ans=0;
    for(i=0;i<N;i++){
        cin >> s >> d;
        if(d<A)d=A;
        if(d>B)d=B;
        if(s[0]=='W')d=-d;
        ans+=d;
    }
    if(ans>0)cout << "East " <<ans <<endl;
    if(ans<0)cout << "West " <<-ans <<endl;
    if(ans==0)cout << 0 <<endl;
    return 0;
}