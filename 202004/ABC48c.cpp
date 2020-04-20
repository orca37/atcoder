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
    ll cnt=0;
    for(i=0;i<N-1;i++){
        if(S[i]!=S[i+1])cnt++;
    }
    cout << cnt <<endl;
    return 0;
}
