#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
using namespace std;
#define ll long long
int main(){
    ll A,B;
    cin >> A >> B;
    cout << (B*1900+(A-B)*100)*pow(2,B);
    return 0;
}
