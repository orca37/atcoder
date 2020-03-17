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
    int N,K;
    cin >> N >> K;
    if(N/2+N%2>=K)cout<< "YES";else cout << "NO";
    return 0;
}
