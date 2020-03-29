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
    ll X,Y,A,B,C;
    cin >> X >> Y >> A >> B >>C;
    ll p[A],q[B],r[C];
    ll i,j;
    for(i=0;i<A;i++){
        cin >> p[i];
    }
    for(i=0;i<B;i++){
        cin >> q[i];
    }
    for(i=0;i<C;i++){
        cin >> r[i];
    }
    sort(p,p+A);
    sort(q,q+B);
    sort(r,r+C);
    ll D[X+Y];
    for(i=0;i<X;i++){
        D[i]=p[A-1-i];
    }
    for(i=0;i<Y;i++){
        D[X+i]=q[B-1-i];
    }
    sort(D,D+X+Y);
    j=C-1;
    for(i=0;i<X+Y;i++){
        if(j>=0&&D[i]<r[j]){
            D[i]=r[j];
            j--;
        }
    }
    ll ans=0;
    for(i=0;i<X+Y;i++){
        ans+=D[i];
    }
    cout << ans;
    return 0;
}
