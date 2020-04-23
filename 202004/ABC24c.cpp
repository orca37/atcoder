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
    ll N,D,K;
    cin >> N >> D >> K;
    ll L[D],R[D],S,T;
    ll i,j;
    for(i=0;i<D;i++){
        cin >> L[i] >> R[i];
    }
    ll mn,mx;
    for(i=0;i<K;i++){
        cin >> S >> T;
        mn=S;mx=S;
        j=0;
        while(T<mn||T>mx){
            if(mn<=R[j])mn=min(mn,L[j]);
            if(mx>=L[j])mx=max(mx,R[j]);
            j++;
        }
        cout << j << endl;
    }
    
    return 0;
}
