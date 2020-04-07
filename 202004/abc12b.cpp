#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    cout << N/36000 << N/3600%10<<":";
    N%=3600;
    cout << N/600 << N/60%10<<":";
    N%=60;
    cout << N/10 << N%10<< endl;
    return 0;
}