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
    ll t,i;
    ll prime[1000001];
    ll ans=0;
    for(i=2;i<=1000000;i++){
        if(N%i==0){
            t=N;
            while(t%i==0){
                t=t/i;
            }
            if(t%i==1){
                ans++;
            }
        }
    }
    t=N;
    for(i=2;i<=1000000;i++){
            while(t%i==0)t=t/i;
    }
    ll t1,t2;
    if(t!=1){
        t1=t;
        while(t1<N){
            t2=N;
            while(t2%t1==0){
                t2=t2/t1;
            }
            if(t2%t1==1){
                ans++;
            }
            t1+=t;
        }
    }
    if(N>1000000)ans++;
    ll tcnt,cnt=1;
    t=N-1;
    for(i=2;i<=1000000;i++){
        tcnt=0;
        while(t%i==0){
            t=t/i;
            tcnt++;
        }
        cnt*=tcnt+1;
    }
    if(t!=1)cnt*=2;
    ans+=cnt-1;
    cout << ans;
    return 0;
}
