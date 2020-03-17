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
	ll n,k;
	ll r,s,p;
	string t;
	ll i;
	cin >> n >> k >> r >> s >> p >> t;
	ll ans=0;
	ll w[n];
	for(i=0;i<n;i++){
		if(t[i]=='r'){
			if((i>=k && w[i-k]==1) && t[i-k]=='r'){
				w[i]=0;
			}else{
				ans+=p;
				w[i]=1;
			}
		}
		if(t[i]=='s'){
			if((i>=k && w[i-k]==1) && t[i-k]=='s'){
				w[i]=0;
			}else{
				ans+=r;
				w[i]=1;
			}
		}
		if(t[i]=='p'){
			if((i>=k && w[i-k]==1) && t[i-k]=='p'){
				w[i]=0;
			}else{
				ans+=s;
				w[i]=1;
			}
		}
	}
	cout << ans;
    return 0;
}
