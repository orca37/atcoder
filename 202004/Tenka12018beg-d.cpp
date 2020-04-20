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
#define MOD 1000000007
int main(){
    ll N;
    cin >> N;
    ll i,j,k=1;
    while(k*(k+1)/2<N){
        k++;
    }
    ll t=1;
    if(k*(k+1)/2==N){
        cout << "Yes" <<endl;
        cout << k+1 << endl;
        vector<ll> v[k+1];
        for(i=0;i<k;i++){
            for(j=i+1;j<k+1;j++){
                v[i].push_back(t);
                v[j].push_back(t);
                t++;
            }
        }
        for(i=0;i<k+1;i++){
            cout << k;
            for(auto itr=v[i].begin();itr!=v[i].end();++itr){
                cout << " " << *itr;
            }
            cout << endl;
        }
    }else{
        cout << "No";
    }
    return 0;
}
