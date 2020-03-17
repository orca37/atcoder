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
    string a,b;
    int i;
    cin >> a >> b;
      if(a.size()>b.size()){
        cout <<"GREATER";
      }
      if(a.size()==b.size()){
        for(i=0;i<a.size();i++){
          if(a[i]>b[i]){
            cout <<"GREATER";
              return 0;
          }
          if(a[i]<b[i]){
            cout <<"LESS";
            return 0;
          }
        }
        cout << "EQUAL";
      }
      if(a.size()<b.size()){
        cout <<"LESS";
      }
    return 0;
}
