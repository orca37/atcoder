#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<cstdlib>
#include<cmath>
using namespace std;
#define ll long long
ll Euclid(ll a,ll b){
	ll tmp;
	if (a<b){
		tmp=a;
		a=b;
		b=tmp;
	}
	ll r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main(){
	ll N,X;
	cin >> N>>X;
	ll i;
  ll a,b;
	cin >> a;
	a=abs(a-X);
	for(i=1;i<N;i++){
		cin >> b;
		b=abs(b-X);
		a=Euclid(a,b);
	}
  cout << a;
  return 0;
}
