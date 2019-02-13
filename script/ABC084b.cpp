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
    ll a,b;
    cin >> a >> b;
    ll i;
    string s;
    cin >>s;
    for(i=0;i<a;i++){
      if(s[i]<47 |s[i]>57){
        cout << "No";
        return 0;
      }
    }
    if(s[a]!='-'){
      cout << "No";
      return 0;
    }
    for(i=a+1;i<a+b+1;i++){
      if(s[i]<47 |s[i]>57){
        cout << "No";
        return 0;
      }
    }
    cout << "Yes" << endl;
    return 0;
}
