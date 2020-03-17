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
	cin >> N;
	string S;
	ll i,mx=0;
	map < string ,ll> mp;
	for(i=0;i<N;i++){
		cin >> S;
		decltype(mp)::iterator it = mp.find(S);
		if(it!=mp.end())++mp[S];else mp.insert(make_pair(S,1));
		mx=max(mp[S],mx);
	}
	vector < string > ans;
	for(auto x : mp){
		if(x.second==mx) cout << x.first << endl;
	}
	return 0;
}