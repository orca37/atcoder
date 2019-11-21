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
    int N,K;
    string s;
    int i;
    cin >> N >> K >> s;
    for(i=0;i<N;i++){
      if(i!=K-1)cout << s[i];else cout << char(s[i]+32);
    }
    return 0;
}
