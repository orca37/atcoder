#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int N,M;
    cin >> N >> M;
    int A,B;
    cin >> A >>B;
    int k[N];
    int i,j;
    int L,R;
    for(i=0;i<N;i++){
      k[i]=B;
    }
    for(i=0;i<M;i++){
      cin >> L >> R;
      for(j=L-1;j<R;j++){
        k[j]=A;
      }
    }
    ll ans=0;
    for(i=0;i<N;i++){
      ans+=k[i];
    }
    cout <<ans;
    return 0;
}
