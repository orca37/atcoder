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
    ll N;
    string s;
    cin >> N >> s;
    if(N%2==0&&s.substr(0,N/2)==s.substr(N/2,N/2))cout <<"Yes";else cout << "No";
    return 0;
}
