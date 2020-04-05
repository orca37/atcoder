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
    ll i,j,ans=0;
    for(i=0;i<12;i++){
        cin >> S;
        j=0;
        while(j<S.size()){
            if(S[j]=='r'){
                ans++;
                break;
            }
            j++;
        }
    }
    cout << ans <<endl;
    return 0;
}