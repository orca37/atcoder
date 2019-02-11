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
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b)a=b;
    cout <<c/a;
    return 0;
}
