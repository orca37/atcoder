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
    ll N;
    cin >> N;
    ll a[N],b[N],c[N];
    ll i;
    for(i=0;i<N;i++){
      cin >>a[i];
    }
    for(i=0;i<N;i++){
      cin >>b[i];
    }
    ll ans=0;
    ll rem=0;
    for(i=0;i<N;i++){
      c[i]=a[i]-b[i];
      if(c[i]<0){
        ans++;
        rem-=c[i];
      }
    }
    sort(c,c+N);
    i=N-1;
    while((c[i]>0)&&(rem>0)){
      rem-=c[i];
      ans++;
      i--;
    }
    if(rem<=0){
      cout << ans;
    }else{
      cout << -1;
    }
    return 0;
}
