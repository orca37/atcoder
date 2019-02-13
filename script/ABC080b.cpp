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
    ll X;
    cin >> X;
    ll tmp=X,cnt=0;
    while(tmp!=0){
      cnt+=tmp%10;
      tmp/=10;
    }
    if(X%cnt==0)cout<<"Yes";else cout<<"No";
    return 0;
}
