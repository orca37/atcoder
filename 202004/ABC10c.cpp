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
    ll a,b,c,d,n,i;
    double T,V;
    cin >> a >> b >>c >> d >> T >> V>>n;
    double x,y;
    for(i=0;i<n;i++){
        cin >> x >> y;
        if(sqrt((a-x)*(a-x)+(b-y)*(b-y))+sqrt((c-x)*(c-x)+(d-y)*(d-y))<=T*V){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
