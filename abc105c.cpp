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
    ll N;
    cin >> N;
    ll tmp=1;
    string str="";
    if(N==0)cout << 0;
    while(N!=0){
      if(N%(tmp*2)!=0){
        N=N-tmp;
        str= '1'+str;
      }else{
        str= '0'+str;
      }
      tmp*=-2;
    }
    cout << str;
    return 0;
}
