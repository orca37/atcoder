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
    ll N;
    cin >> N;
    ll a,b=0,t,i;
    cin >> a;
    for(i=0;i<N-1;i++){
        cin >> t;
        if(t>a)b=a,a=t;else if(t<a)b=max(t,b);
    }
    cout << b << endl;
    return 0;
}