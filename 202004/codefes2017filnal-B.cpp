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
    ll a=0,b=0,c=0;
    ll N =S.size();
    ll i;
    for(i=0;i<N;i++){
        if(S[i]=='a')a++;
        if(S[i]=='b')b++;
        if(S[i]=='c')c++;
    }
    if(a!=S.size()/3&&a!=(S.size()-1)/3+1){
        cout << "NO";
        return 0;
    }
    if(b!=S.size()/3&&b!=(S.size()-1)/3+1){
        cout << "NO";
        return 0;
    }
    if(c!=S.size()/3&&c!=(S.size()-1)/3+1){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
