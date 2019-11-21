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
    int s;
    cin >> s;
    int a=s/100,b=s%100;
    if(a<=12 && a!=0){
      if(b<=12 && b!=0){
        cout << "AMBIGUOUS";
      }else cout << "MMYY";
    }else{
      if(b<=12 && b!=0){
        cout << "YYMM";
      }else cout << "NA";
    }
    return 0;
}
