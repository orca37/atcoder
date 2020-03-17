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
	int N;
	string s,t,ans="";
	cin >> N >> s >> t;
	for(int i=0;i<N;i++){
		ans.push_back(s[i]);
		ans.push_back(t[i]);
	}
	cout << ans;
    return 0;
}
