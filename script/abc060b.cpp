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
    int r;
    while(a%b!=0){
      r=a%b;
      a=b;
      b=r;
    }
    if(c%b==0)cout<<"YES";else cout << "NO";
    return 0;
}
