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
    ll N = S.size();
    ll i;
    for(i=0;i<N/2;i++){
        if(S[i]!=S[N-1-i]){
            cout << "No";
            return 0;
        }
    }
    for(i=0;i<(N-1)/4;i++){
        if(S[i]!=S[(N-1)/2-i-1]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
