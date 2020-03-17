#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int K;
    cin >> K;
    cout << (K/2)*(K/2+K%2);
    return 0;
}
