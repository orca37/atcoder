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
    ll i;
    cin >> N;
    ll A,B;
    cin >> A >> B;
    string S;
    cin >> S;
    ll a=0,b=0;
    for(i=0;i<N;i++){
        if(S[i]=='a'&&a+b<A+B){cout <<"Yes"<<endl;a++;}
        else if(S[i]=='b'&&a+b<A+B&&b<B){cout << "Yes" <<endl;b++;}
        else cout <<"No"<<endl;
    }
    return 0;
}
