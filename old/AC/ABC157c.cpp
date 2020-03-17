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
	ll N,M;
    cin >> N >> M;
    ll a=1;
    ll s[M];
    char c[M];
    ll i,j;
    bool flag;
    for(j=0;j<M;j++){
        cin >> s[j] >> c[j];
    }
    for(i=0;i<1000;i++){
        string str=to_string(i);
        flag=true;
        if(str.size()!=N)flag=false;
        for(j=0;j<M;j++){
            if(str[s[j]-1]!=c[j]){
                flag=false;
            }
        }
        if(flag){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
