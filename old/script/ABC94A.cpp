#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int A,B,X;
    cin >> A >> B >>X;
    if((A<=X)&&(A+B>=X)){
      cout <<"YES";
    }else{
      cout <<"NO";
    }
    return 0;
}
