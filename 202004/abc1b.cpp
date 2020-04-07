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
    ll m;
    cin >> m;
    if(m<10)cout << "00";
    if(m>=10&&m<=5000)cout << m/1000 << m%1000/100;
    if(m>=6000&&m<=30000)cout << m/1000+50;
    if(m>=35000&&m<=70000)cout << (m/1000-30)/5+80;
    if(m>70000)cout << 89;
    cout << endl;
    return 0;
}