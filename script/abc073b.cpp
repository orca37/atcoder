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
    int n,i;
    cin >>n;
    int l,r,ans=0;
    for(i=0;i<n;i++){
      cin >> l >> r;
      ans+=r-l+1;
    }
    cout << ans;
    return 0;
}
