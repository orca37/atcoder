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
    int N,K,X,Y,ans=0;
    cin >> N >> K>> X>>Y;
    if(N>K)cout<<K*X+(N-K)*Y;else cout<<X*N;
    return 0;
}
