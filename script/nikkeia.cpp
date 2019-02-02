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
    int n,a,b;
    cin >> n >> a >> b;
    int ansa,ansb;
    ansa=a;
    if(b<ansa)ansa=b;
    ansb = a+b-n;
    if(ansb<0)ansb=0;
    cout << ansa <<" " <<ansb;
    return 0;
}
