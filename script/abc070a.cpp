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
    int a;
    cin >> a;
    if(a/100==a%10){
      cout <<"Yes";
    }else{
      cout << "No";
    }
    return 0;
}
