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
    cin >> N;
    int i;
    ll B[N-1];
    for(i=0;i<N;i++){
      cin >>B[i];
    }
    ll ans =B[0]+B[N-2];
    for(i=0;i<N-2;i++){
      ans+=min(B[i],B[i+1]);
    }
    cout << ans;
    return 0;
}
