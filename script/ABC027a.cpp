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
    if(a==b)cout << c <<endl;
    else if (b==c) cout << a << endl;
    else cout << b <<endl;
    return 0;
}
