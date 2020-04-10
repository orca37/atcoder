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
    ll N;
    ll i;
    ll A;
    cin >> N;
    ll mn=1111111111,sum=0,cnt=0;
    for(i=0;i<N;i++){
        cin >> A;
        A=abs(A);
        sum+=A;
        mn=min(mn,A);
        cnt=(cnt+1)%2;
    }
    cout << sum-2*cnt*mn;
    return 0;
}
