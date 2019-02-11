#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long
int main(){
    int A,B,C,K,S,T;
    cin >> A>>B>>C>>K>>S>>T;
    int ans=A*S+B*T;
    if(S+T>=K)ans-=(S+T)*C;
    cout << ans << endl;
    return 0;
}
