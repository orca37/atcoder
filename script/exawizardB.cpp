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
    string s;
    cin >> N >> s;
    int i;
    int r=0,b=0;
    for(i=0;i<N;i++){
      if(s[i]=='R')r++;else b++;
    }
    if(r>b)cout <<"Yes";else cout << "No";
    return 0;
}
