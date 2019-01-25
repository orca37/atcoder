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
    string s;
    cin >> s;
    if(s[1]==s[2]){
        if(s[0]==s[1]){
          cout << "Yes";
          return 0;
        }
        if(s[2]==s[3]){
          cout << "Yes";
          return 0;
        }
    }
    cout << "No";
    return 0;
}
