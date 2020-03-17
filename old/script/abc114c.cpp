#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<list>
#include<queue>
using namespace std;
#define ll long long

int judge753(ll a){
  int flag3,flag5,flag7;
  int tmp;
  flag3=0;
  flag5=0;
  flag7=0;
  while(a>0){
    tmp=a%10;
    if(tmp==3)flag3=1;
    if(tmp==5)flag5=1;
    if(tmp==7)flag7=1;
    a=a/10;
  }
  if(flag3*flag5*flag7==1){
    return 1;
  }else{
    return 0;
  }
}

int main(){
  ll N;
  cin >> N;
  queue<ll> q;
  q.push(3);
  q.push(5);
  q.push(7);
  ll cnt,a;
  int flag3,flag5,flag7;
  while(!q.empty()){
     a=q.front();
     if(a*10+3<=N)q.push(a*10+3);
     if(a*10+5<=N)q.push(a*10+5);
     if(a*10+7<=N)q.push(a*10+7);
     cnt+=judge753(a);
     q.pop();
  }
    cout << cnt <<endl;
    return 0;
}
