#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll n,v;
    cin >>n;
    map <ll,ll> vmapodd;
    map <ll,ll> vmapevl;
    ll i;
    int oddflg=0;
    for(i=0;i<n;i++){
      cin >>v;
      if(oddflg==0){
      auto itr = vmapodd.find(v);
      if(itr != vmapodd.end()){
        vmapodd[v]+=1;
      }else{
        vmapodd[v]=1;
      }
    }else{
      auto itr = vmapevl.find(v);
      if(itr != vmapevl.end()){
        vmapevl[v]+=1;
      }else{
        vmapevl[v]=1;
      }
    }
    oddflg=(oddflg+1)%2;
  }
    ll odd =0;
    ll oddkey=0;
    ll oddmax=0;
    ll oddsec=0;
    ll evlmax=0;
    ll evlsec=0;
    ll evlkey=0;
    for(auto it=vmapodd.begin();it!=vmapodd.end();++it){
        if(it->second>=oddmax){
          oddsec=oddmax;
          oddmax=it->second;
          oddkey=it->first;
        } else if(it->second>=oddsec){
          oddsec=it->second;
        }
      }
      for(auto it=vmapevl.begin();it!=vmapevl.end();++it){
          if(it->second>=evlmax){
            evlsec=evlmax;
            evlmax=it->second;
            evlkey=it->first;
          } else if(it->second>=evlsec){
            evlsec=it->second;
          }
        }
    ll ans;
    if(oddkey!=evlkey){
      ans=n-oddmax-evlmax;
    }else{
      ll a=oddmax+evlsec;
      if(oddsec+evlmax>=a){
        a=oddsec+evlmax;
      }
      ans=n-a;
    }
    cout << ans;
    return 0;
}
