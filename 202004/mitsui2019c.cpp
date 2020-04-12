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
    ll X;
    cin >> X;
    ll A[X+1];
    ll i,j;
    for(i=0;i<=X;i++){
        A[i]=0;
    }
    A[0]=1;
    for(i=0;i<X;i++){
        for(j=0;j<6;j++){
            if(100+i+j<=X&&A[i]==1)A[i+100+j]=1;
        }
    }
    cout << (A[X]==1);
    return 0;
}