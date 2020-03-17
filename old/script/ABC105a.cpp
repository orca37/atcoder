#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
	int N,K;
    cin >> N >> K;
    if(N%K==0){cout << 0;}else{cout << 1;};
    return 0;
}
