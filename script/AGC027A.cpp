#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
    int N,x;
    cin >>N>>x;
    int a[N];
    int i;
    for(i=0;i<N;i++){
      cin >> a[i];
    }
    sort(a,a+N);
    int cnt=0;
    for(i=0;i<N-1;i++){
      if(x>=a[i]){
        x-=a[i];
        cnt++;
      }
    }
    if(a[N-1]==x)cnt++;
    cout << cnt;
    return 0;
}
