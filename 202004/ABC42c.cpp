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
    ll N,K;
    cin >> N >> K;
    map<char ,bool> mp;
    ll i,j;
    string s;
    for(i=0;i<=9;i++){
        s=to_string(i);
        mp[s[0]]=0;
    }
    for(i=0;i<K;i++){
        cin >> s;
        mp[s[0]]=1;
    }
    bool flag;
    for(i=N;i<100000;i++){
        s=to_string(i);
        flag=1;
        for(j=0;j<s.size();j++){
            if(mp[s[j]]==1)flag=0;
        }
        if(flag){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
