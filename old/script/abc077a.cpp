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
    string c1,c2;
    cin >> c1 >> c2;
    if(c1[0]!=c2[2]){
      cout << "NO";
      return 0;
    }
    if(c1[1]!=c2[1]){
      cout << "NO";
      return 0;
    }
    if(c1[2]!=c2[0]){
      cout << "NO";
      return 0;
    }
    cout << "YES";
    return 0;
}
