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
    int K;
    string s;
    cin >> s;
    cin >> K;
    vector <string> svec;
    for(ll i=0;i<s.size();i++){
      for(int j=1;j<=K&&i+j-1<s.size();j++){
        svec.push_back(s.substr(i,j));
      }
    }
    sort(svec.begin(),svec.end());
    int i=0;
    int j=0;
    string tmp=svec[0];
    while(true){
      if(tmp!=svec[i]){
        j++;
      }
      if(j==K-1){
        cout <<svec[i];
        return 0;
      }
      tmp =svec[i];
      i++;
    }
}
