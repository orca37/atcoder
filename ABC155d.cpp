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
    ll N,K;
    cin >> N >> K;
    ll i,j;
    ll A[N];
    ll minus=0,zero=0,plus=0;
    for(i=0;i<N;i++){
        cin >> A[i];
        if(A[i]<0)minus++;
        if(A[i]==0)zero++;
        if(A[i]>0)plus++;
    }
    sort(A,A+N);
    ll num,l,r,t;
    if(K<=minus*plus){
        l=-1000000000000000000;
        r=0;
        while(r-l>1){
            t=(l+r)/2;
            num=0;
            j=minus+zero;
            for(i=0;i<minus){
                while(j>minus){
                    j--;
                }
            }
            if(num<K)l=tmp;else r=tmp;
        }
        cout << l;
        return 0;
    }
    if(K>minus*plus && K<=minus*plus+zero*(zero-1)/2+zero*(minus+plus){
        cout << 0;
        return 0;
    }
    if(K>minus*plus+zero*(zero-1)/2+zero*(minus+plus){
        l=0;r=1000000000000000000;
        while(r-l>1){
            t=(l+r)/2;
            num=0;
            j;
            for(i=0;i<minus){
                while(j>minus){
                    j--;
                }
            }
            if(num<K)l=tmp;else r=tmp;
        }
        cout << r;
        return 0;
    }
    
    return 0;
}
