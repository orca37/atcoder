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
    cin >>s;
    int i;
    for(i=0;i<s.size();i+=2){
      cout << s[i];
    }
    return 0;
}
