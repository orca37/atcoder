#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<deque>
#include<map>
using namespace std;
#define ll long long
int main(){
      ll N,K;
      cin >> N >>K;
      vector<pair<int,int> > sushi(N);
      ll i;
      ll pre_eaten[N];
      for(i=0;i<N;i++){
        cin >> sushi[i].second >> sushi[i].first;
        pre_eaten[i]=0;
      }
      sort(sushi.begin(),sushi.end());
      ll type=0;
      ll sum=0;
      deque<ll> sushideque;
      for(i=N-1;i>=N-K;i--){
        if(pre_eaten[sushi[i].second-1]==0){
          pre_eaten[sushi[i].second-1]=1;
          type++;
        }else{
          sushideque.push_back(sushi[i].first);
        }
        sum+=sushi[i].first;
      }
      ll ans = sum + type*type;
      while(sushideque.size()!=0&&i>=0){
        if(pre_eaten[sushi[i].second-1]==0){
          pre_eaten[sushi[i].second-1]=1;
          sum+=sushi[i].first-sushideque.back();
          sushideque.pop_back();
          type++;
          ans=max(ans,sum+type*type);
        }
        i--;
      }
      cout << ans;
      return 0;
}
