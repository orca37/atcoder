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
    pair<int,int> a[3];
    cin >> a[0].first >> a[1].first >> a[2].first;
    int i;
    for(i=0;i<3;i++){
      a[i].second=i;
    }
    sort(a,a+3);
    for(i=0;i<3;i++){
      a[i].first=a[i].second;
      a[i].second=3-i;
    }
    sort(a,a+3);
    for(i=0;i<3;i++){
      cout << a[i].second <<endl;
    }
    return 0;
}
