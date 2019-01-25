#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll min,max;
    int N;
    cin >> N;
    int i;
    ll A;
    cin >> A;
    min=A;
    max=A;
    for(i=1;i<N;i++){
      cin >> A;
      if(A < min)min=A;
      if(A > max)max=A;
    }
    cout << max-min;
    return 0;
}
