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
	string c;
	cin >> N >> c;
	ll i,j,k,l,m;
	string t="ABXY";
	ll dp[N];
	ll tmp=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				for(l=0;l<4;l++){
					dp[0]=0;
					for(m=1;m<N;m++){
						if( (c[m-1]==t[i]&&c[m]==t[j]) || (c[m-1]==t[k]&&c[m]==t[l]) ){
							if(m==1)dp[1]=1;else dp[m]=dp[m-2]+1;
						}else{
							dp[m]=dp[m-1];
						}
					}
					tmp=max(tmp,dp[N-1]);
				}	
			}
		}
	}
	cout << N-tmp << endl;
    return 0;
}
