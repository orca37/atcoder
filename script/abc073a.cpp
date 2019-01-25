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
    if((a/10-9)*(a%10-9)){
      cout << "No";
    }else{
      cout << "Yes";
    }
    return 0;
}
