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
    cout << 2*(A*B+B*C+C*A);
    return 0;
}
