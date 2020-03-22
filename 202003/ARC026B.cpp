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
    ll N;
    cin >> N;
    ll a[100001];
    vector <ll> prime;
    ll i;
    for(i=0;i<=100000;i++){
        a[i]=1;
    }
    a[0]=0;
    a[1]=0;
    ll t,c;
    for(i=2;i<=100000;i++){
        if(a[i]==1){
            prime.push_back(i);
            t=2*i;
            while(t<=100000){
                a[t]=0;
                t+=i;
            }
        }
    }
    vector <pair <ll,ll> > fact;
    t=N;
    ll p;
    for(auto itr=prime.begin();itr!=prime.end();++itr){
        c=1;
        p=1;
        while(t%(*itr)==0){
            t=t/(*itr);
            c*=(*itr);
            p+=c;
        }
        if(c!=1){
            fact.push_back(make_pair(*itr,p));
        }
    }
    ll sum=1;
    for(auto itr=fact.begin();itr!=fact.end();++itr){
        sum*=itr->second;
    }
    if(sum==2*N)cout << "Perfect" <<endl;
    if(sum>2*N)cout << "Abundant" <<endl;
    if(sum<2*N)cout << "Deficient"<<endl;
    return 0;
}
