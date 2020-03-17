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
	ll i=1;
	ll ans=0;
	while(i*i <= N){
		if(N%i==0)ans=i + N/i-2;
		i++;
	}
	cout << ans;
    return 0;
}