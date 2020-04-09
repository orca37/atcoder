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
#include<bitset>
#include<math.h>
using namespace std;
#define ll long long

int main(){
    string S;
    cin >> S;
    ll i;
    ll cnt1=0,cnt2=0;
    for(i=0;i<S.size();i++){
        if(i%2==0){if(S[i]=='0')cnt1++;else cnt2++;}
        if(i%2==1){if(S[i]=='1')cnt1++;else cnt2++;}
    }
    cout << min(cnt1,cnt2)<<endl;
    return 0;
}
