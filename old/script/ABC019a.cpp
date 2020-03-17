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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cout << a[1] <<endl;
    return 0;
}
