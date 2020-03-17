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
	string N;
	cin >> N;
	ll s=N.size();
	int tmp;
	tmp=N[s-1]-'0';
	ll dp[s+1][2];
	dp[s][0]=10-tmp;
	dp[s][1]=tmp;
	ll i;
	for(i=s-2;i>=0;i--){
		tmp=N[i]-'0';
		dp[i+1][0]=min(10-tmp-1+dp[i+2][0],10-tmp+dp[i+2][1]);
		dp[i+1][1]=min(tmp+dp[i+2][1],tmp+1+dp[i+2][0]);
	}
	cout << min(1+dp[1][0],dp[1][1]);
	return 0;
}