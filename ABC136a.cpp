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
    if(A>B+C)cout<< 0;else cout << B+C-A;
    return 0;
}
