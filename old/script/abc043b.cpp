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
    string s,a;
    cin >> s;
    int i=0,j=0;
    for(i=0;i<s.size();i++){
      if(s[i]=='0'){
        a.push_back('0');
        j++;
      }else if(s[i]=='1'){
        a.push_back('1');
        j++;
      }else{
        j=max(0,j-1);
        a=a.substr(0,j);
      }
    }
    cout << a;
    return 0;
}
