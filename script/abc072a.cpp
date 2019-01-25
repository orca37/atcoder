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
    int a,b;
    cin >> a >> b;
    if(a<b){
      cout << 0;
    }else{
      cout << a-b;
    }
    return 0;
}
