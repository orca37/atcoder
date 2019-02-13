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
    ll alp[26];
    ll i;
    for(i=0;i<26;i++){
      alp[i]=0;
    }
    for(i=0;i<s.size();i++){
      if(alp[s[i]-97]==1){
        cout <<"no";
        return 0;
      }else alp[s[i]-97]=1;
    }
    cout << "yes";
    return 0;
}
