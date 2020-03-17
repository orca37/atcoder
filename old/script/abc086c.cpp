#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll i;
    ll ta,xa,ya,tb,xb,yb;
    ta=0;
    xa=0;
    ya=0;
    ll b;
    for(i=0;i<N;i++){
      cin >> tb >> xb >> yb;
      b=abs(xb-xa)+abs(yb-ya);
      if(tb-ta<b||b%2!=(tb-ta)%2){
        cout << "No";
        return 0;
      }
      ta=tb,xa=xb,ya=yb;
    }
    cout << "Yes";
    return 0;
}
