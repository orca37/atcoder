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
	ll N,u,v,i;
	cin >> N >> u >> v;
	u--;
	v--;
	vector < vector <ll> > G(N);
	ll a,b;
	for(i=0;i<N-1;i++){
		cin >> a >> b;
		G[a-1].push_back(b-1);
		G[b-1].push_back(a-1);
	}
	ll distA[N];
	ll distT[N];
	for(i=0;i<N;i++){
		distA[i]=-1;
		distT[i]=-1;
	}
	distA[v]=0;
	distT[u]=0;
	queue <ll> que;
	que.push(u);
	ll p;
	while(!que.empty()){
		p=que.front();
		que.pop();
		for(auto itr=G[p].begin();itr!=G[p].end();++itr){
			i = *itr;
			if(distT[i]==-1){
				distT[i]=distT[p]+1;
				que.push(i);
			}
		}
	}
	que.push(v);
	while(!que.empty()){
		p=que.front();
		que.pop();
		for(auto itr=G[p].begin();itr!=G[p].end();++itr){
			i = *itr;
			if(distA[i]==-1){
				distA[i]=distA[p]+1;
				que.push(i);
			}
		}
	}
	ll mx=0;
	for(i=0;i<N;i++){
		if(distT[i]<distA[i])mx=max(mx,distA[i]-1);
	}
	cout << mx <<endl;
    return 0;
}
