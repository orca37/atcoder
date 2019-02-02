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
    int a,b,c,d;
    cin >>a >> b >> c >> d;
    int ans=max(a*b,c*d);
    cout << ans;
    return 0;
}
