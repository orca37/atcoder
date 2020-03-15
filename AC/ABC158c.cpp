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
	ll A,B,i;
    cin >> A >> B;
    for(i=1;i<=1000;i++){
        if(i*8/100==A && i*10/100==B){cout << i;return 0;}
    }
    cout << -1;
    return 0;
}
