#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
#define mod 1000000007;
int main(){
	string S;
    cin >> S;
    ll pat=1;
    ll A=0;
    ll AB=0;
    ll ABC=0;
    ll i;
    for (i=0;i<S.size();i++){
    	if(S[i]=='A'){
    		A=(A+pat)%mod;
    	}
    	if(S[i]=='B'){
    		AB=(AB+A)%mod;
    	}
    	if(S[i]=='C'){
    		ABC=(ABC+AB)%mod;
    	}
    	if(S[i]=='?'){
    		ABC=(3*ABC+AB)%mod;
    		AB=(3*AB+A)%mod;
    		A=(3*A+pat)%mod;
    		pat=(pat*3)%mod;
    	}
    }
    cout <<ABC;
    return 0;
}
