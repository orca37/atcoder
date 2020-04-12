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
    string S;
    cin >> S;
    int i;
    for(i=0;i<3;i++){
        if(S[i]=='7'){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
