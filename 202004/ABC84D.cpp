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
    ll prime[100001];
    ll pre[100001];
    ll i,j;
    prime[0]=0;
    prime[1]=0;
    for(i=2;i<100001;i++){
        prime[i]=1;
    }
    for(i=2;i<100001;i++){
        if(prime[i]==1){
            j=2*i;
            while(j<100001){
                prime[j]=0;
                j+=i;
            }
        }
    }
    pre[0]=0;
    for(i=1;i<100001;i++){
        pre[i]=pre[i-1]+(prime[i]==1&&prime[(i+1)/2]==1);
    }
    ll Q;
    ll l,m;
    cin >> Q;
    for(i=0;i<Q;i++){
        cin >> l >> m;
        cout << pre[m]-pre[l-1]<<endl;
    }
    return 0;
}
