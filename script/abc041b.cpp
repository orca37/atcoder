#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll a,b,c;
    cin >> a >> b >>c;
    cout <<a*b%1000000007*c%1000000007;
    return 0;
}
