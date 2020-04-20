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
#define MOD 1000000007
vector <ll> g[10];
ll visited[10];
int main(){
    ll sx,sy,tx,ty;
    cin >> sx >> sy >> tx >> ty;
    ll dx=tx-sx,dy=ty-sy;
    ll i;
    for(i=0;i<dx;i++){
        cout <<'R';
    }
    for(i=0;i<dy;i++){
        cout <<'U';
    }
    for(i=0;i<dx;i++){
        cout <<'L';
    }
    for(i=0;i<dy+1;i++){
        cout << 'D';
    }
    for(i=0;i<dx+1;i++){
        cout <<'R';
    }
    for(i=0;i<dy+1;i++){
        cout <<'U';
    }
    cout << 'L';
    cout << 'U';
    for(i=0;i<dx+1;i++){
        cout <<'L';
    }
    for(i=0;i<dy+1;i++){
        cout << 'D';
    }
    cout <<'R';
    return 0;
}
