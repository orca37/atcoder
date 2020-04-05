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
    ll N,i;
    cin >> N ;
    double a[N];
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    sort(a,a+N);
    double b=1.0,sum=0.0;
    for(i=0;i<N;i++){
        sum+=b*a[N-1-i]*a[N-1-i]*acos(-1);
        b*=-1.0;
    }
    cout << setprecision(15) << sum <<endl;
    return 0;
}