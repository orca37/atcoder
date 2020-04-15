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
    ll X;
    cin >> X;
    ll sum=0;
    ll i=0;
    while(sum<X){
        i++;
        sum+=i;
    }
    cout << i;
    return 0;
}
