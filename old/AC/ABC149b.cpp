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
	ll A,B,K;
	cin >> A >> B >> K;
	cout << max(A-K,(long long) 0) << " " << max(min(B-K+A,B),(long long)0) <<endl;
    return 0;
}
