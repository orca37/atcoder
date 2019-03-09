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
    int i,j,k,A,B,C,D,tmp;
    string ope1,ope2,ope3;
    cin >> A;
    B=(A%1000)/100;
    C=(A%100)/10;
    D=A%10;
    A=A/1000;

    for(i=0;i<2;i++){
      for(j=0;j<2;j++){
        for(k=0;k<2;k++){
          tmp=A;
          if(i==0)tmp+=B;else tmp-=B;
          if(i==0)ope1='+';else ope1='-';
          if(j==0)tmp+=C;else tmp-=C;
          if(j==0)ope2='+';else ope2='-';
          if(k==0)tmp+=D;else tmp-=D;
          if(k==0)ope3='+';else ope3='-';
          if(tmp==7){
            cout << A << ope1 << B << ope2 << C << ope3 << D << "=7";
            return 0;
          }
        }
      }
    }
    return 0;
}
