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
	priority_queue<ll> que;
	ll N,M,A;
	cin >> N >> M;
	ll i;
	for(i=0;i<N;i++){
		cin >> A;
		que.push(A);
	}
	ll tmp;
	for(i=0;i<M;i++){
		tmp=que.top();
		que.pop();
		que.push(tmp/2);
	}
	ll sum=0;
	for(i=0;i<N;i++){
		sum+=que.top();
		que.pop();
	}
	cout << sum;
	return 0;
}
