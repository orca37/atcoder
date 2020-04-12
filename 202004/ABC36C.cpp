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
    cin >> N;
    ll A[N],B[N];
    ll i;
    for(i=0;i<N;i++){
        cin >> A[i];
        B[i]=A[i];
    }
    sort(B,B+N);
    map <ll,ll> mp;
    ll tmp=1;
    mp[B[i]]=0;
    for(i=1;i<N;i++){
        if(B[i]>B[i-1]){mp[B[i]]=tmp;tmp++;}
    }
    for(i=0;i<N;i++){
        cout <<mp[A[i]] <<endl;
    }
    return 0;
}
