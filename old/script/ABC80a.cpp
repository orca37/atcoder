#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int N,A,B;
    cin >> N >> A >> B;
    if(N*A<B){
      cout << N*A;
    }else{
      cout <<B;
    }
    return 0;
}
