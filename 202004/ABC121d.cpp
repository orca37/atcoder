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
#include<functional>
#include<cassert>
using namespace std;
#define ll long long
int main(){
    ll A,B;
    cin >> A >> B;
    ll t=2;
    ll sum=0;
    while(t<=2*B){
        sum+=((B+1)/t*t/2+max((B+1)%t-t/2,(ll) 0)-A/t*t/2-max(A%t-t/2,(ll) 0))%2*t/2;  
        t=t*2;
    }
    cout << sum << endl;
    return 0;
}