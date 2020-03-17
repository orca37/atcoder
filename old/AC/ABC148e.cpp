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
	ll ans=0,tmp=5;
	if(N%2==0){
		while(N>=tmp){
			ans+=N/tmp/2;
			tmp*=5;
		}
	}
	cout << ans;
    return 0;
}
