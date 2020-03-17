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
    string str;
    cin >> str;
    string key="keyence";
    int flag=0;
    int i;
    for(i=0;i<=7;i++){
      if(str.substr(0,i)+str.substr(str.size()-7+i,7-i)==key)flag=1;
    }
    if(flag==1){
      cout << "YES";
    }else{
      cout << "NO";
    }
    return 0;
}
