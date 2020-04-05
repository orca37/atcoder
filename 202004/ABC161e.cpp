#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
using namespace std;
#define ll long long
bool visited[111];
int main(){
    ll N,K,C;
    cin >> N >> K >>C;
    string S;
    cin >> S;
    ll i,j;
    pair<ll,ll> ldp[N+1],rdp[N+1];
    ldp[0]=make_pair(0,0);
    rdp[N+1]=make_pair(0,0);
    for(i=1;i<=N;i++){
        if(S[i-1]=='o'&&ldp[i-1].second<=1)ldp[i]=make_pair(ldp[i-1].first+1,C+1);
        else ldp[i]=make_pair(ldp[i-1].first,max(ldp[i-1].second-1,(ll)0));
        if(S[N-i]=='o'&&rdp[N-i+1].second<=1)rdp[N-i]=make_pair(rdp[N-i+1].first+1,C+1);
        else rdp[N-i]=make_pair(rdp[N-i+1].first,max(rdp[N-i+1].second-1,(ll)0));
    }
    for(i=0;i<=N;i++){
        if(ldp[i].first+rdp[i+1].first==K-1)cout <<i+1<<endl;
    }
    return 0;
}
