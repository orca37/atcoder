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
    int n;
    cin >> n;
    int t[n];
    int i;
    int sum=0;
    for(i=0;i<n;i++){
      cin >> t[i];
      sum+=t[i];
    }
    int m,p,x;
    cin >> m;
    for(i=0;i<m;i++){
      cin >> p >> x;
      cout << sum-t[p-1]+x<<endl;
    }
    return 0;
}
