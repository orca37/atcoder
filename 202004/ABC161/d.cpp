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
    ll K;
    cin >> K;
    ll cnt=0;
    ll t,i;
    queue<ll> que;
    for(i=1;i<=9;i++){
        que.push(i);    
    }
    while(cnt<K){
        t=que.front();
        que.pop();
        cnt++;
        if(cnt==K){
            cout << t;
            return 0;
        }
        if(t%10!=0){
            que.push(t*10+t%10-1);
        }
        que.push(t*10+t%10);
        if(t%10!=9){
            que.push(t*10+t%10+1);
        }
    }
    return 0;
}
