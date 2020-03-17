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
	ll N,M,V,P;
	cin >> N >> M >> V >> P;
	ll i;
	ll A[N];
	for(i=0;i<N;i++){
		cin >> A[i];
	}
	sort(A,A+N,greater<ll>());
	ll S[N];
	S[P-1]=A[P-1];
	for(i=0;i<P-1;i++){
		S[i]=0;
	}
	for(i=P;i<N;i++){
		S[i]=S[i-1]+A[i];
	}
	ll l=P-1,r=N,t;
	while(r-l>1){
		t=(r+l)/2;
		if(A[t]+M>=A[P-1] && S[t-1]+max((long long)0,(V-(N+P-t-1)))*M<=(t-P+1)*(A[t]+M))l=t;else r=t;
	}
	cout << l+1;
    return 0;
}
