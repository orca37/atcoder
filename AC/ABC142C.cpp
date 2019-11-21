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
	ll N,i;
	cin >> N;
	ll A;
	ll ans[N];
	for(i=0;i<N;i++){
		cin >> A;
		ans[A-1]=i+1;
	}
	for(i=0;i<N;i++){
		cout << ans[i]<< " ";
	}
	return 0;
}
