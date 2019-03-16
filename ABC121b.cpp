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
    int N,M,C;
    cin >> N >> M >> C;
    int ans=0;
    int i,j;
    int A,B[M];
    for(j=0;j<M;j++){
      cin >> B[j];
    }
    int tmp;
    for(i=0;i<N;i++){
      tmp=C;
      for(j=0;j<M;j++){
        cin >> A;
        tmp+=A*B[j];
      }
      if (tmp>0)ans++;
    }
    cout <<ans;
    return 0;
}
