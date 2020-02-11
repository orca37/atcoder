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
	ll prime[100003];
	prime[0]=0;
	prime[1]=0;
	prime[2]=1;
	ll i,j;
	for(i=2;i<=100003;i++){
		prime[i]=1;
	}
	i=2;
	while(i*i<=100003){
		if(prime[i]==1){
			for(j=2*i;j<=100003;j+=i){
				prime[j]=0;
			}
		}
		i++;
	}
	ll N;
	cin >> N;
	while(prime[N]==0){
		N++;
	}
	cout << N <<endl;
    return 0;
}
