#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long
int main(){
    int N;
    cin >> N;
    int ans=0;
    if(N<10)ans=N;else ans+=9;
    if(N>=100){
      if(N<1000)ans+=N-99;else ans+=900;
    }
    if(N>=10000){
      if(N<100000)ans+=N-9999;else ans+=90000;
    }
    cout << ans;
    return 0;
}
