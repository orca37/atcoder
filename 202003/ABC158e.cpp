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
int main(){
    ll N,P;
    string S;
    cin >> N >> P >>S;
    ll U[N+1];
    ll i,ans=0;
    if(P==2){
    	for(i=0;i<N;i++){
    		if((S[i]-'0')%2==0)ans+=i+1;
    	}
    	cout << ans;
    	return 0;
    }
    if(P==5){
    	for(i=0;i<N;i++){
    		if((S[i]-'0')%5==0)ans+=i+1;
    	}
    	cout << ans;
    	return 0;
    }
    map <ll,ll> mp;
    U[N]=0;
    mp[0]=1;
    ll tmp=1;
    for(i=0;i<N;i++){
    	U[N-i-1]=((S[N-i-1]-'0')*tmp+U[N-i])%P;
    	tmp=tmp*10%P;
    	if(mp.count(U[N-i-1])){
    		ans+=mp[U[N-i-1]];
    		++mp[U[N-i-1]];
    	}else{
    		mp[U[N-i-1]]=1;
    	}
    }
    cout << ans;
    return 0;
}
