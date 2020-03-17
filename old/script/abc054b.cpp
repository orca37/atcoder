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
    int N,M;
    cin >> N >> M;
    int i,j,k,l;
    string a[N],b[M];
    for(i=0;i<N;i++){
      cin >> a[i];
    }
    for(j=0;j<M;j++){
      cin >> b[j];
    }
    int flag;
    for(i=0;i<=N-M;i++){
      for(j=0;j<=N-M;j++){
        flag=0;
        for(k=0;k<M;k++){
          for(l=0;l<M;l++){
            if(a[i+k][j+l]!=b[k][l]){
              flag=1;
            }
          }
        }
        if(flag==0){
          cout << "Yes";
          return 0;
        }
      }
    }
    cout << "No";
    return 0;
}
