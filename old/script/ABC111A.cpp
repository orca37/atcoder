#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int N;
    cin >> N;
    int dev=100;
    int i;
    for(i=0;i<3;i++){
      cout <<   10-N/dev;
      N=N%dev;
      dev=dev/10;
    }
}
