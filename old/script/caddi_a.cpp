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
    cin >> N;
    int count=0;
    while(N>0){
      if(N%10==2)count++;
      N=N/10;
    }
    cout << count;
    return 0;
}
