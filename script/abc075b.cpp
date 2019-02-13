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
    int H,W;
    cin >> H>> W;
    ll i,j,k,l;
    ll field[H+2][W+2];
    string line;
    string ans[H+2][W+2];
    for(i=0;i<=H+1;i++){
      field[i][0]=0;
      field[i][W+1]=0;
    }
    for(j=0;j<=W+1;j++){
      field[0][j]=0;
      field[H+1][j]=0;
    }
    for(i=1;i<H+1;i++){
      cin >>line;
      for(j=1;j<W+1;j++){
        if(line[j-1] == '.')field[i][j]=0;else field[i][j]=1;
      }
    }
    ll tmp;
    for(i=1;i<H+1;i++){
      for(j=1;j<W+1;j++){
        tmp=0;
        for(k=-1;k<=1;k++){
          for(l=-1;l<=1;l++){
            if(field[i+k][j+l]==1)tmp++;
          }
        }
        ans[i][j]=to_string(tmp);
        if(field[i][j]==1)ans[i][j]="#";
      }
    }
    for(i=1;i<H+1;i++){
      for(j=1;j<W+1;j++){
        cout << ans[i][j];
      }
      cout << endl;
    }
    return 0;
}
