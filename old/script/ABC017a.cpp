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
    int s,e,i,ans;
    for(i=0;i<3;i++){
      cin >> s >> e;
      ans+=s/10*e;
    }
    cout << ans << endl;
    return 0;
}
