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
    int x,a,b;
    cin >>x >> a >> b;
    if (abs(x-a)>abs(x-b)){
      cout << "B";
    }else{
      cout << "A";
    }
    return 0;
}
