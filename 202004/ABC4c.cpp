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
    ll a[6]={1,2,3,4,5,6};
    ll i;
    cin >> N;
    N=N%30;
    for(i=0;i<N;i++){
        swap(a[i%5],a[i%5+1]);
    }
    for(i=0;i<6;i++){
        cout << a[i];
    }
    return 0;
}
