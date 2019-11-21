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
	string S;
	cin >> S;
	ll n=S.size();
	ll i;
	for(i=0;i<n;i++){
		if(i%2==0&& S[i]=='L'){
			cout << "No";
			return 0;
		}
		if(i%2==1&& S[i]=='R'){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
