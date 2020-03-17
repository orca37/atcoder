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
    int N,A,B;
    cin >> N >> A >> B;
    int i;
    int count[3];
    for(i=0;i<3;i++){
      count[i]=0;
    }
    int P;
    for(i=0;i<N;i++){
      cin >> P;
      if(P<=A)count[0]++;
      if(A<P && P<=B)count[1]++;
      if(P>B)count[2]++;
    }
    int ans=100;
    for(i=0;i<3;i++){
      if(ans>count[i])ans=count[i];
    }
    cout << ans;
    return 0;
}
