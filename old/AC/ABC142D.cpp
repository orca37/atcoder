#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
	ll A,B,r,t;
	cin >> A >> B;
	r=1;
	while(r!=0){
		r=B%A;
		B=A;
		A=r;
	}
	ll i=2;
	ll cnt=1;
	while(i*i<=B){
		if(B%i==0)cnt++;
		while(B%i==0){
			B=B/i;
		}
		i++;
	}
	if(B!=1)cnt++;
	cout << cnt;
    return 0;
}
