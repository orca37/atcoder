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
    int K,S;
    cin >> K >>S;
    int X,Y;
    int count=0;
    for(X=0;X<=K;X++){
      for(Y=0;Y<=K;Y++){
        if(S-X-Y>=0 && S-X-Y<=K)count++;
      }
    }
    cout << count;
    return 0;
}
