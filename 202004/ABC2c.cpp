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
#include<cmath>
using namespace std;
#define ll long long
int main(){
    double a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >>f;
    c=c-a;
    d=d-b;
    e=e-a;
    f=f-b;
    cout << setprecision(20)<<abs(c*f-d*e)/2.0;
}
