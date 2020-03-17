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
    ll N,A;
    ll f=0,s=0,i,fn;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> A;
        if(f<A)s=f,f=A,fn=i;else s=max(s,A);
    }
    for(i=0;i<N;i++){
        if(i==fn)cout << s<<endl;else cout << f<<endl;
    }
}