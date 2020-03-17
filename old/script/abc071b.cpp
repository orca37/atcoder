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
    int flag[26];
    for(i=0;i<26;i++){
      flag[i]=0;
    }
    for(i=0;i<s.size();i++){
      flag[s[i]-97]=1;
    }
    for(i=0;i<26;i++){
      if(flag[i]==0){
        cout << (char)(i+97)<<endl;
        return 0;
      }
    }
    cout << "None";
    return 0;
}
