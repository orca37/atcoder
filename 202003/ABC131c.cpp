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
    ll A,B,C,D;
    cin >> A >> B >> C >> D;
    ll r=0,t;
    if(C<D){
        t=C;
        C=D;
        D=t;
    }
    ll p=C,q=D;
    while(p%q!=0){
        r=p%q;
        p=q;
        q=r;
    }
    ll E=C*D/q;
    cout << (B-A+1)-(B/C-(A-1)/C)-(B/D-(A-1)/D)+(B/E-(A-1)/E);
    return 0;
}