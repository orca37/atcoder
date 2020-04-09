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
    string S,T;
    cin >> S >>T;
    ll i,j;
    bool flag;
    for(i=S.size()-1;i>=T.size()-1;i--){
        flag=1;
        for(j=0;j<T.size();j++){
            if(S[i-j]!='?'&&S[i-j]!=T[T.size()-1-j])flag=0;
        }
        if(flag){
            for(j=0;j<T.size();j++){
                S[i-j]=T[T.size()-1-j];
            }
            break;
        }
    }
    if(flag){
        for(i=0;i<S.size();i++){
            if(S[i]=='?')S[i]='a';
        }
        cout << S;
    }else cout <<"UNRESTORABLE" <<endl;
    return 0;
}
