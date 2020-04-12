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
    ll a,b;
    cin >> a >> b;
    if(a<=0&&b>=0)cout <<"Zero";
    if(a>0)cout << "Positive";
    if(b<0&&(b-a)%2==1)cout << "Positive";
    if(b<0&&(b-a)%2==0)cout << "Negative";
    return 0;
}