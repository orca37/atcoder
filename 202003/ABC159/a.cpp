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
    int n,m;
    cin >> n >> m;
    cout << n*(n-1)/2+m*(m-1)/2;
    return 0;
}
