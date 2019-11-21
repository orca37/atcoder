#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
	ll i,j,k;
	long double a,b,N,K,x;
	ll l,r,t;
	cin >> a >> b >>x;
	long double ans;
	long double pi=acos(-1);
	if(x<a*a*b/2.0)ans=atan2(b,2.0*x/a/b)/2/pi*360;else ans=atan2(2.0*(a*a*b-x)/a/a,a)/2/pi*360; 
	cout << setprecision(13) << ans;
    return 0;
}
