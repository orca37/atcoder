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
    ll N,a,b,c;
    cin >> N>> a>> b>>c;
    if(N==a||N==b||N==c){
        cout << "NO"<<endl;
        return 0;
    }
    ll cnt=0;
    while(N>0&&cnt<100){
        cnt++;
        N-=3;
        if(N==a||N==b||N==c){
            N++;
        }
        if(N==a||N==b||N==c){
            N++;
        }
        if(N==a||N==b||N==c){
            N++;
        }
    }
    if(cnt==100&&N>0){
        cout << "NO" <<endl;
    }else cout <<"YES"<<endl;
    return 0;
}
