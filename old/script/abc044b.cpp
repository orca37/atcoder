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
    string w;
    cin >> w;
    int i;
    int alp[26];
    for(i=0;i<26;i++){
      alp[i]=0;
    }
    for(i=0;i<w.size();i++){
      alp[w[i]-97]++;
    }
    for(i=0;i<26;i++){
      if(alp[i]%2!=0){
          cout <<"No";
          return 0;
      }
    }
    cout <<"Yes";
    return 0;
}
