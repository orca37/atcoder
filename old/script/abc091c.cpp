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
    pair<ll,ll> red[N];
    pair<ll,ll> blue[N];
    ll i,j;
    for(i=0;i<N;i++){
      cin >> red[i].first >> red[i].second;
    }
    for(i=0;i<N;i++){
      cin >> blue[i].second >> blue[i].first;
    }
    sort(red,red+N);
    sort(blue,blue+N);
    ll ans=0;
    ll blue_select[N];
    for(i=0;i<N;i++){
      blue_select[i]=0;
    }
    ll tmp=0;
    for(i=0;i<N;i++){
      tmp=-1;
      for(j=0;j<N;j++){
        if(red[N-1-i].first<blue[j].second&&red[N-1-i].second<blue[j].first&&blue_select[j]==0&&tmp==-1){
            tmp=j;
        }
      }
      if(tmp!=-1){
        blue_select[tmp]=1;
        ans++;
      }
    }
    cout << ans;
    return 0;
}
