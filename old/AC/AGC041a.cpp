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
	ll N,A,B;
	cin >> N >> A >> B;
	if((B-A)%2==0){
		cout << (B-A)/2;
	}else{
		cout << min(A+(B-A)/2,N-B+1+(B-A-1)/2);
	}
    return 0;
}
