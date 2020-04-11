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
    string S;
    cin >> N >> S;
    ll i,j,k;
    int tmp;
    bool t[10],m[100],d[1000];
    for(i=0;i<10;i++){
        t[i]=0;
    }
    for(i=0;i<100;i++){
        m[i]=0;
    }
    for(i=0;i<1000;i++){
        d[i]=0;
    }
    for(i=0;i<N;i++){
        tmp=S[i]-'0';
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                if(m[k*10+j]==1)d[k*100+j*10+tmp]=1;
            }
        }
        for(j=0;j<10;j++){
            if(t[j]==1)m[10*j+tmp]=1;
        }
        t[tmp]=1;
    }
    ll ans=0;
    for(i=0;i<1000;i++){
        ans+=d[i];
    }
    cout << ans;
    return 0;
}
