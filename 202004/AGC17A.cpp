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
    ll N,P;
    cin >> N >> P;
    ll i,j;
    ll A;
    ll k=0;
    for(i=0;i<N;i++){
        cin >> A;
        if(A%2==1)k++;
    }
    if(k==0){if(P==1)cout<< 0;else cout<< setprecision(20)<< pow(2,N);}else cout << setprecision(20) << pow(2,N-1);
    return 0;
}
