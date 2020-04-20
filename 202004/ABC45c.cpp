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
    ll i,j;
    ll ans=0;
    ll tmp;
    for(i=0;i<N;i++){
        tmp=S[i]-'0';
        ans+=tmp*pow(10,N-1-i)*pow(2,i);
        for(j=0;j<N-1-i;j++){
            ans+=tmp*pow(10,j)*pow(2,N-j-2);
        }
    }
    cout << ans << endl;
    return 0;
}
