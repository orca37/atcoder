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
    ll A,B,C;
    cin >> A >> B >>C;
    if(A+B==C){
        if(A-B==C)cout<<'?';else cout << '+';
    }else{
        if(A-B==C)cout<<'-';else cout << '!';
    }
    cout << endl;
    return 0;
}