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
	ll H,N;
	cin >> H >> N;
	ll A;
	ll tmp=0;
	for(ll i=0;i<N;i++){
		cin >> A;
		tmp+=A;
	}
	if(tmp>=H)cout << "Yes";else cout <<"No";
    
    return 0;
}
