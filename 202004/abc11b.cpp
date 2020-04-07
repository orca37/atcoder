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
    ll N=S.size();
    ll i;
    if(S[0]>=97)cout << (char)(S[0]-32);else cout <<S[0];
    for(i=1;i<N;i++){
        if(S[i]<97)cout << (char)(S[i]+32);else cout <<S[i];
    }
    cout << endl;
    return 0;
}