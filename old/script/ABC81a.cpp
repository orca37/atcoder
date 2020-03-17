#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int s;
    cin >> s;
    cout << s/100+(s%100)/10+(s%10);
    return 0;
}
