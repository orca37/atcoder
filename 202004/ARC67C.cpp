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
    ll prime[1001];
    prime[0]=0;
    prime[1]=0;
    ll i,j;
    ll mod =1000000007;
    for(i=2;i<1000;i++){
        prime[i]=1;
    }
    for(i=2;i<1000;i++){
        if(prime[i]==1){
            j=2*i;
            while(j<1000){
                prime[j]=0;
                j+=i;
            }
        }
    }
    ll N;
    cin >> N;
    ll ans=1;
    ll cnt,t;
    for(i=1;i<=N;i++){
        if(prime[i]==1){
            t=i;
            cnt=0;
            while(t<=N){
                cnt+=N/t;
                t=t*i;
            }
            ans=ans*(cnt+1)%mod;
        }
    }
    cout << ans;
    return 0;
}
