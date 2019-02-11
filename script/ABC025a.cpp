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
    string s;
    int N;
    cin >> s>>N;
    int i,j;
    string sl[5];
    for(i=0;i<5;i++){
      sl[i]=s[i];
    }
    sort(sl,sl+4);
    for(i=0;i<5;i++){
      for(j=0;j<5;j++){
        if(i*5+j==N-1)cout << sl[i]<< sl[j]<<endl;
      }
    }
    return 0;
}
