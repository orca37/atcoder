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
    ll n;
    cin >> n;
    ll p[n];
    ll i;
    for(i=0;i<n;i++){
        cin >> p[i];
    }
    ll ans =0;
    for(i=1;i<n-1;i++){
        if(p[i-1]<p[i]&&p[i]<p[i+1])ans++;
        if(p[i-1]>p[i]&&p[i]>p[i+1])ans++;
    }
    cout << ans;
    return 0;
}