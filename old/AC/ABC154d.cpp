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
	ll N,K,i;
	cin >> N >> K;
	double p[N];
	for(i=0;i<N;i++){
		cin >> p[i];
	}
	double sum=0.0,ans=0.0;
	for(i=0;i<K;i++){
		sum+=(p[i]+1.0)/2.0;
	}
	ans = sum;
	for(i=K;i<N;i++){
		sum+=(p[i]+1.0)/2.0-(p[i-K]+1.0)/2.0;
		ans=max(ans,sum);
	}
	cout << setprecision(10) <<ans;
	return 0;
}
