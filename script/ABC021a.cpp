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
    cout << N/2+N%2<<endl;
    if(N%2==1){
      cout << N%2<<endl;
      N-=1;
    }
    while(N!=0){
      N-=2;
      cout << 2<<endl;
    }
    return 0;
}
