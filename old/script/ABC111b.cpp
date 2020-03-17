#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
   int N;
   int i;
   cin >> N;
   for(i=1;i<N;i++){
     if(N<=i*111){
       cout <<i*111;
       return 0;
     }
   }
}
