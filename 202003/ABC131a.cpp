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
    ll i;
    for(i=0;i<S.size()-1;i++){
        if(S[i]==S[i+1]){
            cout << "Bad";
            return 0;
        }
    }
    cout << "Good";
    return 0;
}