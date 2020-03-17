#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<math.h>
using namespace std;
#define ll long long
int main(){
   int N,M;
   cin >>N >> M;
   int i;
   int Xmax;
   int Ymin;
   cin >> Xmax >> Ymin;
   int x,y;
   for(i=0;i<N;i++){
     cin >> x;
     if(Xmax<x)Xmax=x;
   }
   for(i=0;i<M;i++){
     cin >> y;
     if(Ymin>y)Ymin=y;
   }
   if(Xmax>=Ymin){
     cout <<"War";
   }else{
     cout <<"No War";
   }
}
