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
    ll a,i,ans=0;
    for(i=0;i<N;i++){
        cin >> a;
        if(a%6==5)ans+=2;
        if(a%6==0)ans+=3;
        if(a%6==4)ans+=1;
        if(a%6==2)ans+=1;
    }
    cout << ans << endl;
    return 0;
}