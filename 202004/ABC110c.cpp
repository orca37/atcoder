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
#include<functional>
#include<cassert>
using namespace std;
#define ll long long
int main(){
    string S,T;
    cin >> S >> T;
    ll i;
    map <char,char> mp;
     map <char,char> mp2;
    for(i=0;i<S.size();i++){
        if(mp.count(S[i])==0){
            mp[S[i]]=T[i];
        }
        if(mp2.count(T[i])==0){
            mp2[T[i]]=S[i];
        }
        if(mp[S[i]]!=T[i]||mp2[T[i]]!=S[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}