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
    ll i,t=1;
    ll N = S.size();
    for(i=0;i<N-1;i++){
        if(S[i]!=S[i+1]){
            cout << S[i];
            cout << t;
            t=0;
        }
        t++;
    }
    cout << S[N-1] << t << endl;
    return 0;
}