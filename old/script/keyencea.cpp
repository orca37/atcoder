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
    int n;
    int i;
    int a1,a2,a3,a4;
    a1=0;
    a2=0;
    a3=0;
    a4=0;
    for(i=0;i<4;i++){
      cin >> n;
      if(n==1)a1=1;
      if(n==9)a2=1;
      if(n==7)a3=1;
      if(n==4)a4=1;
    }
    if(a1+a2+a3+a4==4){
      cout << "YES";
    }else{
      cout << "NO";
    }
    return 0;
}
