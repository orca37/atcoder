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
	string S;
	cin >> S;
	ll ans=1;
	for(ll i=1;i<N;i++){
		if(S[i]!=S[i-1])ans++;
	}
	cout << ans;
    return 0;
}