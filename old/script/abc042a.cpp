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
    if((a==5&&b==7&&c==5)|(a==7&&b==5&&c==5)|(a==5&&b==5&&c==7))cout<<"YES";
    else cout <<"NO";
    return 0;
}
