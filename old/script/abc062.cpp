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
    int a,b;
    int x,y;
    cin >> x >>y ;
    a = 1;
    b = 1;
    if(x==2)a=3;
    if(y==2)b=3;
    if(x==4|x==6|x==9|x==11)a=2;
    if(y==4|y==6|y==9|y==11)b=2;
    if(a==b){
      cout << "Yes";
    }else{
      cout << "No";
    }
    return 0;
}
