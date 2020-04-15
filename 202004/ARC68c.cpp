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
    ll N,M;
    cin >> N >> M;
    ll a,b;
    ll i,j;
    vector <ll> to,from;
    for(i=0;i<M;i++){
        cin >> a >> b;
        if(a==1)to.push_back(b);
        if(b==N)from.push_back(a);
    }
    if(!to.empty()&&!from.empty()){
        sort(to.begin(),to.end());
        sort(from.begin(),from.end());
        auto itr2=from.begin();
        for(auto itr1=to.begin();itr1!=to.end();++itr1){
            while(*itr2<=*itr1&&itr2!=from.end()){
                if(*itr2==*itr1){cout << "POSSIBLE" <<endl;return 0;}
                ++itr2;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
