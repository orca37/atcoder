#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if(A>B) A=B;
    if(C>D) C=D;
    cout << A+C;
    return 0;
}
