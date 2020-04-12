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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll A,B,C,D,E;
    cin >> A >> B >> C;
    ll cnt=0;
    while(true){
        if(A%2==1||B%2==1||C%2==1){
            cout << cnt;
            return 0;
        }
        if(A==B&&B==C){
            cout << -1;
            return 0;
        }
        D=A;E=B;
        A=(B+C)/2;
        B=(D+C)/2;
        C=(D+E)/2;
        cnt++;
    }
}