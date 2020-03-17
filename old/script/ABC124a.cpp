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
    cin >> a >> b;
    int m=max(a,b);
    if(a==b)cout << 2*m;else cout << 2*m-1;
    return 0;
}
