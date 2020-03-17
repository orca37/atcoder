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
    int a,b;
    string op;
    cin >> a >> op >> b;
    if(op=="+")cout<<a+b;else cout <<a-b;
    return 0;
}
