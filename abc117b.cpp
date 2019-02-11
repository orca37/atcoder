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
    int N,i;
    cin >> N;
    int mx=0,sum=0;
    int a;
    for(i=0;i<N;i++){
      cin >> a;
      sum+=a;
      mx=max(a,mx);
    }
    if(sum>2*mx)cout<<"Yes";else cout <<"No";
    return 0;
}
