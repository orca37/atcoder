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
	ll N,cnt=0,tmp;
	ll i;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> tmp;
		if(tmp==cnt+1){
			cnt++;
		}
	}
	if(cnt==0)cout << -1;else cout << N-cnt;
    return 0;
}
