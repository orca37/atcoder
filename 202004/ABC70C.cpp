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
#include<bitset>
#include<math.h>
using namespace std;
#define ll long long

int main(){
    ll N,T1,T2;
    ll a,b,r,i;
    cin >> N >> T1;
    for(i=1;i<N;i++){
        cin >> T2;
        a=T1;
        b=T2;
        if(a<b)swap(a,b);
        while(a%b!=0){
            r=a%b;
            a=b;
            b=r;
        }
        T1=T1/b*T2;
    }
    cout << T1;
    return 0;
}
