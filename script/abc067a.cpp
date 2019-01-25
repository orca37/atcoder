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
    int max=a;
    if(max<b)max=b;
    if(max<c)max=c;
    cout << a+b+c-max;
    return 0;
}
