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
  int N;
cin >> N;
string a[N];
int i,j;
for(i=0;i<N;i++){
  cin >> a[i];
}
for(i=0;i<N;i++){
  for(j=0;j<N;j++){
    cout << a[N-j-1][i];
  }
  cout << endl;
}
return 0;
}
