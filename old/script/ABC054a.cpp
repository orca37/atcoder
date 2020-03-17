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
    int a,b;
    cin>> a>> b;
    if(a==1)a+=13;
    if(b==1)b+=13;
    if(a>b)cout << "Alice";
    if(a<b)cout << "Bob";
    if(a==b)cout << "Draw";
    return 0;
}
