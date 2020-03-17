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
    int n,k,x,i,ans=0;
    cin >> n>>k;
    for(i=0;i<n;i++){
      cin >>x;
      ans+=min(x,k-x);
    }
    cout << ans*2;
    return 0;
}
