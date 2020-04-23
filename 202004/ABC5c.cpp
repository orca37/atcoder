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
    ll T,N,M;
    cin >> T >> N;
    ll A[N];
    ll i,j;
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    cin >> M;
    ll B[M];
    for(i=0;i<M;i++){
        cin >> B[i];
    }
    if(N<M){
        cout << "no"<<endl;
        return 0;
    }else{
        j=0;
        for(i=0;i<M;i++){
            while(A[j]+T<B[i]&&j<N){
                j++;
            }
            if(j==N||B[i]<A[j]){
                cout << "no"<<endl;
                return 0;
            }
            j++;
        }
    }
    cout << "yes"<<endl;
    return 0;
}
