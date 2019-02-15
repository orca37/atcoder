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
    string s[3];
    int n[3];
    n[0]=0;
    n[1]=0;
    n[2]=0;
    cin >> s[0]>>s[1]>>s[2];
    int t=0;
    while(true){
      if(n[t]>=s[t].size()){
        cout <<char(t+65);
        return 0;
      }
      n[t]+=1;
      t=s[t][n[t]-1]-97;
    }
    return 0;
}
