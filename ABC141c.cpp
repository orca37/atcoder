#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<priority_queue>
using namespace std;
#define ll long long
int main(){
	ll N,K,Q;
	cin >> N >> K >> Q;
	ll cnt[N];
	ll i;
	for(i=0;i<N;i++){
		cnt[i]=0;
	}
	ll A;
	for(i=0;i<Q;i++){
		cin >> A;
		cnt[A-1]+=1;
	}
	for(i=0;i<N;i++){
		if(Q-cnt[i]<K)cout << "Yes"<<endl;else cout <<"No"<<endl;
	}
	return 0;
}
