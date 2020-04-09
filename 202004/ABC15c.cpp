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
    ll T[N][K];
    for(i=0;i<N;i++){
        for(j=0;j<K;j++){
            cin >> T[i][j];
        }
    }
    ll a[N];
    ll tmp;
    for(i=0;i<pow(K,N);i++){
        tmp=0;
        for(j=0;j<N;j++){
            a[j]=T[j][i%(ll)pow(K,j+1)/(ll)pow(K,j)];
            tmp=tmp^a[j];
        }
        if(tmp==0){
           cout << "Found" << endl;
           return 0;
        }
    }
    cout << "Nothing" << endl;
    return 0;
}
