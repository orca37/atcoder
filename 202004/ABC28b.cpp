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
    ll a=0,b=0,c=0,d=0,e=0,f=0,i;
    for(i=0;i<S.size();i++){
        if(S[i]=='A')a+=1;
        if(S[i]=='B')b+=1;
        if(S[i]=='C')c+=1;
        if(S[i]=='D')d+=1;
        if(S[i]=='E')e+=1;
        if(S[i]=='F')f+=1;
    }
    cout << a << " " << b << " "<< c << " " <<d << " " <<e <<" " <<f<<endl;
    return 0;
}