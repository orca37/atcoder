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
	ll A;
	cin >> N;
	ll i,j,k;
	ll x,y;
	vector < vector< pair<ll,ll> > > v(N);
	for(i=0;i<N;i++){
		cin >> A;
		for(j=0;j<A;j++){
			cin >> x >> y;
			v[i].push_back(make_pair(x-1,y));
		}
	}
	ll S[N],flag,ans=0,tmp;
	pair <ll,ll> p;
	for(i=0;i < (1<<N);i++){
		for(j=0; j < N; j++){
			if (i & (1 << j)){
				S[j]=1;
			}else{
				S[j]=0;
			}
		}
		flag=1;
		for(j=0;j<N;j++){
			if(S[j]==1){
				for(auto itr=v[j].begin();itr!=v[j].end();++itr){
					p=*itr;
					if(S[itr->first]!=itr->second)flag=0;
				}
			}
		}
		tmp=0;
			if(flag==1){
				for(k=0;k<N;k++){
						tmp+=S[k];
					}
			}
			ans=max(ans,tmp);
	}
	cout << ans;
    return 0;
}
