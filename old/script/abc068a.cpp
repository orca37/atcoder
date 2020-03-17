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
    if((a%3)!=0 && (a%3)==(b%3)){
      cout << "Impossible";
    }else{
      cout << "Possible";
    }
}
