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
	string S,T,U;
	int A,B;
	cin >> S >> T >> A >> B >> U;
	if(S==U)A-=1;else B-=1;
	cout << A << " " <<B;
    return 0;
}
