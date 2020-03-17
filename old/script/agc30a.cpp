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
    int A,B,C;
    cin >> A >> B >> C;
    if(A+B <= C-1){
      cout << A+2*B+1;
    }else{
      cout << B+C;
    }
    return 0;
}
