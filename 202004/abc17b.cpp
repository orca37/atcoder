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
    ll N;
    N=S.size();
    ll k;
    bool flag=1;
    for(k=0;k<N;k++){
        if(S[k]=='c'){
            k++;
            if(k==N||S[k]!='h')flag=0;
        }else if(S[k]!='o' && S[k]!='k' && S[k]!='u' )flag=0;
    }
    cout << (flag?"YES":"NO") << endl;
    return 0;
}