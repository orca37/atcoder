#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    string a,b;
    cin >> a >> b;
    map<char,char> mp1;
    map<char,char> mp2;
    int i;
    for(i=0;i<a.size();i++){
      auto itr1 = mp1.find(a[i]);
      auto itr2 = mp2.find(b[i]);
      if(itr1==mp1.end()){
        mp1[a[i]]=b[i];
      }
      if(itr2==mp2.end()){
        mp2[b[i]]=a[i];
      }
      if((mp1[a[i]]!=b[i])|(mp2[b[i]]!=a[i])){
          cout << "No" <<endl;
          return 0;
      }
    }
    cout << "Yes" <<endl;
    return 0;
}
