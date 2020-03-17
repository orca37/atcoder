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
	int a,b,c;
	cin >> a >> b >> c;
	if(a==b && b!=c){
		cout << "Yes";
		return 0;
	}
	if(a==c && b!=c){
		cout << "Yes";
		return 0;
	}
	if(c==b && b!=a){
		cout << "Yes";
		return 0;
	}
	cout << "No";
	return 0;
}