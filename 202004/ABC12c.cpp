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
    ll N;
    cin >> N;
    N=2025-N;
    ll i,j;
    for(i=1;i<10;i++){
        for(j=0;j<10;j++){
            if(i*j==N){
                cout << i <<" x " << j<<endl;
            }
        }
    }
    return 0;
}
