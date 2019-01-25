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
    int X,A,B;
    cin >> X >> A >> B;
    if(B<=X){
      cout << "delicious";
    }else if(B<=A+X){
      cout << "safe";
    }else{
      cout << "dangerous";
    }
    return 0;
}
