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
    ll W,H,x,y;
    cin >> W >> H >> x >> y;
    cout << ((double) H)*((double) W)/2.0 << " " << ((W==x+x && H==y+y)?1:0); 
}