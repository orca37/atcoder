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
    int w,a,b;
    cin >> w >> a >> b;
    int t;
    if(b<a){
      t=a;
      a=b;
      b=t;
    }
    cout << max(b-a-w,0);
    return 0;
}
