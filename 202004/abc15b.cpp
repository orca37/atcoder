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
    ll A,i,sum=0,t;
    t=N;
    for(i=0;i<N;i++){
        cin >> A;
        if(A==0)t--;
        sum+=A;
    }
    cout << (sum-1)/t+1 <<endl;
    return 0;
}