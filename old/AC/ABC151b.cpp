#include<iostream>
#include<stdlib.h>
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
	int N,K,M,A,i;
	cin >> N >> K >> M;
	int rem=M*N;
	for(i=0;i<N-1;i++){
		cin >> A;
		rem-=A;
	}
	if(rem>K){
		cout << -1;
	}else{
		cout << max(0,rem);
	}
    return 0;
}
