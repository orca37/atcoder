#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
using namespace std;
#define ll long long
int main(){
	ll N,A,B;
    cin >> N >> A >> B;
    cout << N/(A+B)*A+min(N%(A+B),A);
    return 0;
}
