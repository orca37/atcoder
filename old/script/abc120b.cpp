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
    int A,B,K;
    int i=100;
    cin >> A >> B >> K;
    int cnt=0;
    while(i>0){
      if(A%i==0&&B%i==0){
        cnt++;
        if(cnt==K){
          cout << i;
        }
      }
      i--;
    }
    return 0;
}
