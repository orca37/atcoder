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
    cin >> N;
    ll i,j,k,l,r;
    for(k=0;k<N;k++){
        cin >> l >> r;
        reverse(S.begin()+l-1,S.begin()+r);
    }
    cout << S << endl;
    return 0;
}