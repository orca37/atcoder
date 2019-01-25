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
    string a,b;
    cin >> a >> b;
    if(a>b)cout << ">";
    if(a==b)cout << "=";
    if(a<b)cout << "<";
    return 0;
}
