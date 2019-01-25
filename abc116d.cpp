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
      ll N,K;
      cin >> N >>K;
      vector<pair<int,int> > sushi(N);
      ll i,j,k;
      ll t,d;
      ll ans=0;
      for(i=0;i<N;i++){
        cin >> t >> d;
        sushi[i] = make_pair(d,t);
      }
      sort(sushi.begin(),sushi.end());
      ll maxsum[N];
      ll nomaxsum[N];
      ll type[N];
      for(i=0;i<N;i++){
        type[i]=0;
      }
      ll maxcount =1;
      ll nomaxcount =0;
      maxsum[0]=sushi[N-1].first;
      nomaxsum[0]=0;
      type[sushi[N-1].second]=1;
      for(i=1;i<N;i++){
        if(type[sushi[N-1-i].second]==0){
          type[sushi[N-1-i].second]=1;
          maxsum[maxcount]=maxsum[maxcount-1]+sushi[N-1-i].first;
          maxcount++;
        }else{
          if(nomaxcount==0){
            nomaxsum[0]=sushi[N-1-i].first;
          }else{
            nomaxsum[nomaxcount]=nomaxsum[nomaxcount-1]+sushi[N-1-i].first;
          }
          nomaxcount++;
        }
      }
      ll tmp;
      i=maxcount;
      if(i>=K){
        ans=maxsum[K-1]+K*K;
        i=K-1;
      }else{
        ans=maxsum[i-1]+i*i;
      }
      while((i>0)&&(K-i<=nomaxcount)){
        tmp=maxsum[i-1]+nomaxsum[K-i-1]+i*i;
        if(tmp>ans)ans=tmp;
        i--;
      }
      cout << ans;
      return 0;
}
