#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int N;
    cin >> N;
    if(N%2==0){
      cout << N;
    }else{
      cout << N*2;
    }
    return 0;
}
