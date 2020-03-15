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
	string s;
    cin >> s;
    if(s=="SUN")cout << 7;
    if(s=="MON")cout << 6;
    if(s=="TUE")cout << 5;
    if(s=="WED")cout << 4;
    if(s=="THU")cout << 3;
    if(s=="FRI")cout << 2;
    if(s=="SAT")cout << 1;
    return 0;
}
