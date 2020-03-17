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
	ll H,N;
	cin >> H >> N;
	ll A[N],B[N];
	pair<double,ll> C[N];
	ll i,j;
	for(i=0;i<N;i++){
		cin >> A[i] >> B[i];
	}
	ll dp[N][H+1];
	for(i=0;i<N;i++){
		dp[N][0]=0;
	}
	for(j=1;j<H+1;j++){
		dp[0][j]=((j-1)/A[0]+1)*B[0];
	}
	for(i=1;i<N;i++){
		for(j=1;j<H+1;j++){
			if(j<=A[i])dp[i][j]=min(B[i],dp[i-1][j]);
			if(j>A[i])dp[i][j]= min(dp[i-1][j],min(dp[i][j-A[i]],dp[i-1][j-A[i]])+B[i]);
		}
	}
	cout << dp[N-1][H];
    return 0;
}
