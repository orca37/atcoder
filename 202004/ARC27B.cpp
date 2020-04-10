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
    ll N;
    cin >> N;
    string S,T;
    cin >> S >> T;
    ll i,j;
    char c1,c2;
    for(i=0;i<N;i++){
        if(S[i]!=T[i]){
            c1=S[i];
            c2=T[i];
            if(isdigit(c1))swap(c1,c2);
        }
        for(j=0;j<N;j++){
            if(S[j]==c1)S[j]=c2;
            if(T[j]==c1)T[j]=c2;
        }
    }
    ll ans=1;
    if(isalpha(S[0]))ans*=9;
    for(j=1;j<N;j++){
        if(S[j]==S[0])S[j]='0';
    }
    for(i=1;i<N;i++){
        c1=S[i];
        if(isalpha(c1))ans*=10;
        for(j=0;j<N;j++){
            if(S[j]==c1)S[j]='0';
        }
    }
    cout << ans << endl;
    return 0;
}
