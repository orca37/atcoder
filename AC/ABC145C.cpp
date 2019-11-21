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
	ll N;
	cin >> N;
	double x[N],y[N];
	for(ll i=0;i<N;i++){
		cin >> x[i] >> y[i];
	}
	double sum=0;
	for(ll i=0;i<N-1;i++){
		for(ll j=i+1;j<N;j++){
			sum+=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
		}
	}
	cout <<  setprecision(10) << 2*sum/N ;
    return 0;
}