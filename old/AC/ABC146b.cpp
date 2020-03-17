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
    int N;
    cin >> N;
	string s;
    cin >> s;
    ll i;
    for(i=0;i<s.size();i++){
        cout<< (char)((int)(s[i]+N<='Z'?s[i]+ N:s[i]+N-26));
    }
    return 0;
}
