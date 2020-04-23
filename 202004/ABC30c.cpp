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
    ll N,M,X,Y;
    cin >> N >> M>> X>> Y;
    ll a[N],b[M];
    ll i,j;
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    for(j=0;j<M;j++){
        cin >> b[j];
    }
    i=0;j=0;
    ll tmp=0,ans=0;
    while(i<N){
        if(tmp>a[i]){
            i++;
            continue;
        }else{
            tmp=a[i]+X;
        }
        while(j<M){
            if(tmp>b[j])j++;else{
                tmp=b[j]+Y;
                ans++;
                break;
            }
        }
        if(j==M)break;
    }
    cout << ans <<endl;
    return 0;
}
