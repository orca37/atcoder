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
    int n,m;
    cin >> n>>m;
    cout << (m-n%m)%m<<endl;
    return 0;
}
