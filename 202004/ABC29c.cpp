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
    char a[3]={'a','b','c'};
    ll N;
    cin >> N;
    ll i,j;
    char c[N];
    ll tmp;
    for(i=0;i<pow(3,N);i++){
        tmp=i;
        for(j=0;j<N;j++){
            c[j]=a[tmp%3];
            tmp=tmp/3;
        }
        for(j=0;j<N;j++){
            cout << c[N-1-j];
        }
        cout << endl;
    }
}
