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
#include<bitset>
#include<math.h>
using namespace std;
#define ll long long

int main(){
    ll N,A,B,C,D,E;
    cin >> N >> A >> B >> C >> D >> E;
    cout << (N-1)/min({A,B,C,D,E})+4 <<endl;
    return 0;
}
