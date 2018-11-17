#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll i,j;
    ll X[N],Y[N];
    for(i=0;i<N;i++){
      cin >> X[i] >>Y[i];
    }
    int odd = (X[0]+Y[0])%2;
    for(i=0;i<N;i++){
      if(odd!=(X[i]+Y[i])%2)){
        cout << -1;
        return 0;
      }
    }
    int m=50+odd;
    cout << m;
    for(i=0;i<m-1;i++){
      cout << 1 <<" ";
    }
    cout << 1 <<endl;
      for(i=0;i<N;i++){
        if(X[i]<0){
          for(j=0;j<-X[i];j++){
            cout 
          }
        }
      }
    return 0;
}
