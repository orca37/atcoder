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
	ll N,M;
	cin >> N >> M;
	ll A[N];
	ll i;
	for(i=0;i<N;i++){
		cin >> A[i];
	}
	sort(A,A+N);
	for(i=0;i<N;i++){
		cout << A[i]<<" ";
	}
    return 0;
}
