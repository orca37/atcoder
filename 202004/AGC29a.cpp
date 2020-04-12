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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    string S;
    cin >> S;
    ll N=S.size();
    ll tmp=0,ans=0;
    ll i;
    for(i=0;i<N;i++){
        if(S[i]=='W'){
            ans+=i-tmp;
            tmp++;
        }
    }
    cout << ans;
    return 0;
}
