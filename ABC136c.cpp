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
    ll H,max=0;
    ll i;
    for(i=0;i<N;i++){
      cin >> H;
      if(max<H){
        max=H;
      }else if(H<max-1){
        cout << "No";
        return 0;
      }
    }
    cout << "Yes";
    return 0;
}
