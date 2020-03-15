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
    ll A,B,X;
    cin >> A >> B >> X;
    ll l=0,r=1000000001;
    ll tmp,d;
    while(r-l>1){
        tmp=(r+l)/2;
        d=1;
        while(pow(10,d)<=tmp){
            d++;
        }
        if(A*tmp+B*d<=X)l=tmp;else r=tmp;
    }
    cout << l;
    return 0;
}
