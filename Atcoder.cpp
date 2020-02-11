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
int

int main(){
	ll N;
	ll A;
	cin >> N;
	ll i,j;
	ll x,y;
	vector < vector< pair<ll,ll> > > v(N);
	for(i=0;i<N;i++){
		cin >> A;
		for(j=0;j<A;j++){
			cin >> x >> y;
			v[j].push_back(make_pair(x-1,y));
		}
	}
	ll S[N],flag,ans;
	for(ll i=0;i < (1<<N);i++){
		for(j=0; j < N; j++){
			if (i & (1 << j)){
				S[j]=1;
			}else{
				S[j]=0;
			}
		}
		for(j=0;j<N;j++){
			if(S[j]=1){
				flag =1;
				for(auto itr=v[j].begin();v[j].end();++itr){
					if(S[*itr.first]!=y)flag=0;
				}
			}
			if(flag){
				ans=0;
				for(i=0;i<N;i++){
					ans+=S[i];
				}
			}
		}
	}
    return 0;
}
