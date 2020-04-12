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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll mn=100,s,i,sum=0;
    for(i=0;i<N;i++){
        cin >> s;
        sum+=s;
        if(s%10!=0)mn=min(mn,s);
    }
    cout << (sum%10!=0?sum:(mn!=100?sum-mn:0)) <<endl;
    return 0;
}
