#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int A,B;
    cin >> A >> B >> C >>D;
    if(A+B>C+D)cout<<"Left";
    if(A+B==C+D)cout<<"Balanced";
    if(A+B<C+D)cout<<"Right";
    return 0;
}
