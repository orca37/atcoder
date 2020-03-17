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
	ll N,K;
	cin >> N >> K;
	ll H[N];
	ll i;
	for(i=0;i<N;i++){
		cin >> H[i];
	}
	sort(H,H+N);
	ll ans=0;
	for(i=0;i<N-K;i++){
		ans+=H[i];
	}
	cout << ans << endl;
    return 0;
}
