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
    ll i;
    for(i=0;i<=50000;i++){
        if(i*108/100==N){
            cout << i;
            return 0;
        }
    }
    cout << ":("<<endl;
    return 0;
}
