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
    ll A[N],cnt[N+1];
    ll i;
    for(i=0;i<N+1;i++){
        cnt[i]=0;
    }
    for(i=0;i<N;i++){
        cin >> A[i];
        ++cnt[A[i]];
    }
    ll b=0;
    for(i=0;i<N+1;i++){
        b+=cnt[i]*(cnt[i]-1)/2;
    }
    for(i=0;i<N;i++){
        cout << b-cnt[A[i]]+1 << endl;
    }
    return 0;
}
