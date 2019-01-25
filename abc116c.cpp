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
    int i,j,flag;
    cin >> N;
    int h[N];
    for(i=0;i<N;i++){
      cin >> h[i];
    }
    flag=0;
    ll cnt=0;
    for(j=100;j>0;j--){
      flag=0;
      for(i=0;i<N;i++){
          if(h[i]>=j){
            if(flag==0){
              cnt++;
            }
            flag = 1;
          }else{
            flag = 0;
          }
      }
    }
    cout << cnt;
    return 0;
}
