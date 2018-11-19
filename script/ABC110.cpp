#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int A,B,C;
    cin >> A >> B >>C;
    int ans =10*A+B+C;
    if(10*B+A+C>ans)ans=10*B+A+C;
    if(10*C+A+B>ans)ans=10*C+A+B;
    cout << ans;
    return 0;
}
