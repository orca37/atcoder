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
	ll N;
	string S;
	cin >> N >> S;
	ll i,j,k;
	string a[N][N];
	for(i=0;i<N;i++){
		for(k=0;k<N-i;k++){
			a[i][k]=S.substr(i,k+1);
		}
	}
	ll l,r,tmp;
	ll len;
	ll maxlen=0;
	for(i=0;i<N;i++){
		for(j=i+1;j<N-1;j++){
			len =0;
			if(a[i][0]==a[j][0]){
				if(a[i][1]!=a[j][1]||j==i+1){
					len=1;
				}else{
					l=0;
					r=min(j-i,N-j+1);
					while(r-l>1){
						tmp=(l+r)/2;
						if(a[i][tmp]==a[j][tmp])l=tmp;else r=tmp;
					}
					len=l+1;
				}
			}
			maxlen=max(maxlen,len);
		}
	}
	cout << maxlen;
	return 0;
}
