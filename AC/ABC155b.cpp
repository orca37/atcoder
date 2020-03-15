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
	int N,A;
	cin >> N;
	int i;
	for(i=0;i<N;i++){
		cin >> A;
		if(A%2==0){
			if(A%3!=0&&A%5!=0){
				cout << "DENIED";
				return 0;
			}
		}
	}
	cout << "APPROVED";
	return 0;
}