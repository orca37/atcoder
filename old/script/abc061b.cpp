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
    int n,m;
    cin >> n >> m;
    int i;
    int a[n];
    int tmp;
    for(i=0;i<n;i++)a[i]=0;
    for(i=0;i<2*m;i++){
      cin >> tmp;
      a[tmp-1]++;
    }
    for(i=0;i<n;i++)cout << a[i] << endl;
    return 0;
}
