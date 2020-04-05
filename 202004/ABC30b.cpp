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
    double n,m;
    cin >> n >> m;
    if(n>=12)n-=12;
    double t=5.5*m-30*n;
    t=max(t,-t);
    cout << min(t,360-t)<<endl;
    return 0;
}