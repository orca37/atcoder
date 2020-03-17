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
	ll N,D,A;
	cin >> N >> D >> A;
	ll i;
	queue< pair<ll,ll> > que;
	ll X,H;
	pair <ll , ll > enemy[N];
	ll tmp=0;
	ll ans=0;
	ll num;
	for(i=0;i<N;i++){
		cin >> X >>H;
		enemy[i]=make_pair(X,H);
	}
	sort(enemy,enemy+N);
	for(i=0;i<N;i++){
		while(!que.empty() && que.front().first < enemy[i].first){
			tmp-=que.front().second;
			que.pop();
		}
		if(enemy[i].second-tmp>0)num=(enemy[i].second-tmp-1)/A+1;else num=0;
		que.push(make_pair(enemy[i].first+2*D,num*A));
		tmp+=num*A;
		ans+=num;
	}
	cout << ans;
    return 0;
}
