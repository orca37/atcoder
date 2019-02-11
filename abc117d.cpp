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
    ll primet2[11]={22,26,34,38,46,58,62,74,82,86,94};
    ll primet4[7]={20,28,44,52,68,76,92};
    ll numpt2=3;
    ll numpt4=2;
    if(N<10){
      cout << 0;
    }else{
      ll i=0,j=0,k=10;
      while(k<N){
        if(prime[i]==k){
          numpt2++;
          i++;
        }
        if(primet4[j]==k){
          numpt4++;
          j++;
        }
        k++;
      }
      cout << (numpt2-2)*numpt4*(numpt4-1)/2;
    }
    return 0;
}
