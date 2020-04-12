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
    string S;
    cin >> N >> S;
    ll i,j;
    ll bad=0;
    ll r=0,g=0,b=0;
    for(i=0;i<N;i++){
        if(S[i]=='R')r++;
        if(S[i]=='G')g++;
        if(S[i]=='B')b++;
        for(j=0;j<N;j++){
            if(i+2*j<N&&S[i]!=S[i+j]&&S[i]!=S[i+2*j]&&S[i+j]!=S[i+2*j])bad++;
        }
    }
    cout << r*g*b-bad;
    return 0;
}
