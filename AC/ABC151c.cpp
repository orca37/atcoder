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
	ll N,M;
	cin >> N >> M;
	ll ac=0,wa=0,pen[N];
	ll i;
	ll p;
	string s;
	for(i=0;i<N;i++){
		pen[i]=0;
	}
	for(i=0;i<M;i++){
		cin >> p >> s;
		if(pen[p-1]!=-1){
			if(s=="AC"){
				ac++;
				wa+=pen[p-1];
				pen[p-1]=-1; 
			}else{
				++pen[p-1];
			}
		} 
	}
	cout << ac << " " << wa;
    return 0;
}
