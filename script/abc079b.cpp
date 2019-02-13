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
    int N;
    cin >>N;
    ll a=2,b=1,tmp=0;
    int i;
    for(i=1;i<N;i++){
      tmp=b;
      b=a+b;
      a=tmp;
    }
    cout << b;
    return 0;
}
