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
    if(a+b==c)cout <<"Yes";
    else if(b+c==a)cout <<"Yes";
    else if(c+a==b)cout <<"Yes";
    else cout << "No";
    return 0;
}
