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
    ll w,h,n;
    cin >> w >> h >> n;
    int ar[4];
    ar[0]=0;
    ar[1]=w;
    ar[2]=0;
    ar[3]=h;
    int x,y,a;
    for(int i=0;i<n;i++){
      cin >> x >> y >> a;
      if(a==1)ar[0]=max(ar[0],x);
      if(a==2)ar[1]=min(ar[1],x);
      if(a==3)ar[2]=max(ar[2],y);
      if(a==4)ar[3]=min(ar[3],y);
    }
    if(ar[1]>ar[0]&ar[3]>ar[2])cout << (ar[1]-ar[0])*(ar[3]-ar[2]);else cout << 0;
    return 0;
}
