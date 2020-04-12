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
    ll N,A,B;
    cin >> N >> A >> B;
    if(A>B||(N==1&&A!=B))cout << 0;
    else{
        cout << (B-A)*(N-2)+1;
    }
    return 0;
}
