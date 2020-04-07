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
    string S;
    cin >> N >>S;
    bool flag=1;
    for(i=0;i<N;i++){
        if((i+N)%3==0&&S[i]!='a')flag=0;
        if((i+N)%3==1&&S[i]!='b')flag=0;
        if((i+N)%3==2&&S[i]!='c')flag=0;
    }
    if(N%2==0)flag=0;
    cout << (flag?(N-1)/2:-1) << endl;
    return 0;
}
