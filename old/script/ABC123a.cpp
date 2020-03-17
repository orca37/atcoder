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
    int a,b,c,d,e,k;
    int mx,mn;
    cin >> a >> b >> c >> d >> e >> k;
    mx=a,mn=a;
    if(mx<b)mx=b;
    if(mx<c)mx=c;
    if(mx<d)mx=d;
    if(mx<e)mx=e;
    if(mn>b)mn=b;
    if(mn>c)mn=c;
    if(mn>d)mn=d;
    if(mn>e)mn=e;
    if(mx-mn<=k)cout << "Yay!";else cout << ":(";
    return 0;
}
