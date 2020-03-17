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
	ll i;
	ll A[N];
	for(i=0;i<N;i++){
		cin >> A[i];
	}
	sort(A,A+N);
	for(i=0;i<N-1;i++){
		if(A[i]==A[i+1]){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
