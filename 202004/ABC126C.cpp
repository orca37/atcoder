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
    ll N,t;
    double K;
    cin >> N >> K;
    double p=1.0/(double) N;
    double ans=0.0;
    while(N>=1){
        t=max((ll)0,(ll)(N-ceil(K)+1));
        ans+=t*p;
        N=N-t;
        K=K/2.0;
        p=p/2.0;
    }
    cout<< setprecision(15) <<ans <<endl;
    return 0;
}
