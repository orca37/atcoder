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
	ll i,j,k;
	ll N;
	cin >> N;
	ll L[N];
	ll l,r,t;
	for(i=0;i<N;i++){
		cin >> L[i];
	}
	sort(L,L+N);
	ll cnt=0;
	for(i=0;i<N-2;i++){
		for(j=i+1;j<N-1;j++){
			l=j;
			r=N;
			while(r-l>1){
				t=(r+l)/2;
				if(L[i]+L[j]>L[t])l=t;else r=t;
			}
			cnt+=l-j;
		}
	}
	cout << cnt;
    return 0;
}
