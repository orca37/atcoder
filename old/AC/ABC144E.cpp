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
	ll ans;
	ll a,b,N,K;
	ll l,r,t;
	cin >> N >>K;
	ll A[N],F[N];
	long long zero=0;
	for(i=0;i<N;i++){
		cin >> A[i];
	}
	for(i=0;i<N;i++){
		cin >> F[i];
	}
	sort(A,A+N);
	sort(F,F+N);
	l=-1,r=1000000000000000;
	ll sum;
	while(r-l>1){
		t=(l+r)/2;
		sum=0;
		for(i=0;i<N;i++){
			sum+=max(A[N-1-i]-t/F[i],zero);
		}
		if(K>=sum)r=t; else l=t;
	}
	cout << r;
    return 0;
}
