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
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int ans=min(B,D)-max(A,C);
    if(ans<0)ans=0;
    cout << ans;
    return 0;
}
