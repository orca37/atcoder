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
    int s;
    cin >> s;
    ll cnt=1;
    while(((s!=4)&&(s!=2))&&(s!=1)){
      if(s%2==0){
        s=s/2;
      }else{
        s=3*s+1;
      }
      cnt++;
    }
    cout << cnt+3;
    return 0;
}
