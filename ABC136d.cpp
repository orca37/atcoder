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
  cin >> s;
  ll N=s.size();
  ll i;
  char cb,cn;
  ll Rpos,Lpos;
  ll even,odd;
  ll ans[N];
  cb='R';
  even=1;
  odd=0;
  for(i=1;i<N;i++){
    cn=s[i];
    if(cb=='R'){
      even+=(i+1)%2;
      odd+=i%2;
      if(cn=='R'){
        ans[i-1]=0;
      }
      if(cn=='L'){
        Rpos=i-1;
        Lpos=i;
      }
    }
    if(cb=='L'){
      if(cn=='L'){
        ans[i]=0;
        even+=(i+1)%2;
        odd+=i%2;
      }
      if(cn=='R'){
        if(Rpos%2==0){
          ans[Rpos]=even;
          ans[Lpos]=odd;
        }else{
          ans[Rpos]=odd;
          ans[Lpos]=even;
        }
        even=(i+1)%2;
        odd=i%2;
      }
    }
    if(i==N-1){
      if(Rpos%2==0){
        ans[Rpos]=even;
        ans[Lpos]=odd;
      }else{
        ans[Rpos]=odd;
        ans[Lpos]=even;
      }
    }
    cb=cn;
  }
  for(i=0;i<N-1;i++){
    cout << ans[i]<<" ";
  }
  cout << ans[N-1];
  return 0;
}
