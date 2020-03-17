#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
	vector<string> strvec;
	string pre,now;
	int N,i;
	cin >> N;
	cin >>pre;
	strvec.push_back(pre);
	for(i=1;i<N;i++){
		cin >> now;
		if(pre[pre.size()-1]!=now[0]){
			cout <<"No";
			return 0;
		}
		vector<string>::iterator ite =find(strvec.begin(),strvec.end(),now);
		if(ite != strvec.end()){
			cout <<"No";
			return 0;
		}
		strvec.push_back(now);
		pre = now;
	}
  cout << "Yes";
  return 0;
}
