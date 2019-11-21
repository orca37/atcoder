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
    ll N;
    cin >> N;
    ll i,j;
    cout << N*(N-1)/2-N/2 <<endl;
    for(i=N;i>0;i--){
      for(j=i-1;j>0;j--){
          if((j!=N+(N+1)%2-i))cout << i << " "<<j<<endl;
      }
    }
    return 0;
}
