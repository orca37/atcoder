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
    ll N,M;
    cin >> N >> M;
    ll a,b,c;
    if(2*N>M||4*N<M){
        cout << "-1 -1 -1" <<endl;
    }else{
        if(3*N<=M){
            a=0;
            b=4*N-M;
            c=M-3*N;
        }else {
            a=3*N-M;
            b=M-2*N;
            c=0;
        }
        cout <<a <<" " <<b << " " << c <<endl;
    }
    return 0;
}
