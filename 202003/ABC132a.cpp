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
    string S;
    cin >> S;
    ll i,j;
    if(S[0]==S[1]&&S[2]==S[3]&&S[3]!=S[1]){cout << "Yes";return 0;}
    if(S[0]==S[2]&&S[1]==S[3]&&S[1]!=S[2]){cout << "Yes";return 0;}
    if(S[0]==S[3]&&S[2]==S[1]&&S[0]!=S[1]){cout << "Yes";return 0;}
    cout << "No";
    return 0;
}