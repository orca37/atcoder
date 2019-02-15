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
    int n,l;
    cin >> n >>l;
    string s[n];
    int i;
    for(i=0;i<n;i++){
      cin >> s[i];
    }
    sort(s,s+n);
    for(i=0;i<n;i++){
      cout << s[i];
    }
    return 0;
}
