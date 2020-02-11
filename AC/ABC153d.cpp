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
	ll H;
	cin >> H;
	ll tmp=2;
	while(tmp<=H){
		tmp*=2;
	}
	cout << tmp-1;
    return 0;
}
