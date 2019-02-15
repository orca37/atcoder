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
    int x=0,xmax=0;
    int n,i;
    cin >> n;
    string s;
    cin >> s;
    for(i=0;i<n;i++){
      if(s[i]=='I')x++;else x--;
      xmax=max(x,xmax);
    }
    cout << xmax;
    return 0;
}
