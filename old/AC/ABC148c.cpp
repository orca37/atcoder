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
	ll A,B;
	cin >> A >>B;
	ll p=A,q=B,r=1;
	while(r>0){
		r=p%q;
		p=q;
		q=r;
	}
	cout << A*B/p;
    return 0;
}
