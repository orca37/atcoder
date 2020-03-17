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
    int a;
    int cnt[4];
    int i;
    for(i=0;i<4;i++)cnt[i]=0;
    for(i=0;i<6;i++){
      cin >> a;
      cnt[a-1]++;
      if(cnt[a-1]==3){
        cout << "NO";
        return 0;
      }
    }
    cout << "YES";
    return 0;
}
