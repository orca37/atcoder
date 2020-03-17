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
    int a,b,c;
    cin >> a >> b >> c;
    if(b-a == c-b){
      cout <<"YES";
    }else{
      cout << "NO";
    }
    return 0;
}
