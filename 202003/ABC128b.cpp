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
    ll N,i;
    cin >> N;
    vector < pair <pair <string , ll >,ll> > v;
    string S;
    ll P;
    for(i=0;i<N;i++){
        cin >> S >> P;
        v.push_back(make_pair(make_pair(S,-P),i+1));
    }
    sort(v.begin(),v.end());
    for(auto itr=v.begin();itr!=v.end();++itr){
        cout << itr->second<<endl;
    }
    return 0;
}