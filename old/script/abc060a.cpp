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
    string A,B,C;
    cin >> A >> B >> C;
    if(A[A.size()-1]==B[0]&&B[B.size()-1]==C[0]){
      cout << "YES";
    }else{
      cout << "NO";
    }
    return 0;
}
