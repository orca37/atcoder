#include<iostream>
#include<string>
#include<cstdlib>
#include<typeinfo>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    string str;
    ll K;
    cin >> str >> K;
    int i,j;
    i=0;
    while(i<str.size()){
        j=stoi(str.substr(i,1));
        if(j!=1){
          cout << j <<endl;
          return 0;
        }else{
          if(i==K-1){
              cout << 1 << endl;
              return 0;
          }
        }
        i++;
    }
}
