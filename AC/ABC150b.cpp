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
	string S;
	cin >> N >> S;
	int i,ans=0;
	for(i=0;i<N-2;i++){
		if(S[i]=='A'&& S[i+1]=='B'&& S[i+2]=='C')ans++;
	}
	cout << ans;
    return 0;
}
