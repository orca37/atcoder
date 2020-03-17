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
    ll n,h,a;
    cin >> n >> h>> a;
    cout << (n-h+1)*(n-a+1);
    return 0;
}
