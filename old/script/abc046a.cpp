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
    int a,b,c,ans;
    cin >> a >> b >> c;
    ans=3;
    if(a==b)ans--;
    if(a==c|b==c)ans--;
    cout <<ans;
    return 0;
}
