#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N;
    ll i,j;
    cin >> N;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(i*j==N){
            	cout <<"Yes";
            	return 0;
            }
        }
    }
    cout << "No";
    return 0;
}
