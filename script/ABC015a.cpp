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
    string str1,str2;
    cin >> str1 >>str2;
    if(str1.size()>str2.size())cout <<str1;else cout <<str2;
    cout <<endl;
    return 0;
}
