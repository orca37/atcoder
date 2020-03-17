#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll i;
    int p[64];
    int flag=0;
    for(i=0;i<64;i++){
    	p[i]=0;
    }
    ll tmp;
    ll tmp2;
    if(N==0){
    	cout << 0;
    }else if(N>0){
    	p[0]=N%2;
    	tmp=N/2;
    	for(i=1;i<64;i++){
    		p[i]=tmp%2;
    		tmp=tmp/2;
    	}
    	flag=0;
    	for(i=63;i>=0;i--){
    	if((p[i]==1)|(flag==1)){
    		cout<<p[i];
    		flag=1;
    	}
    }
    	tmp=0;
    	for(i=1;i<64;i++){
    		if(i%2==0){
    			tmp2=p[i];
    			p[i]=(p[i]+tmp)%2;
    			tmp=(tmp2+tmp)/2;
    		}else{
    			tmp2=p[i];
    			p[i]=(p[i]+tmp)%2;
    			tmp=tmp2+(tmp2+tmp)/2;
    		}
    	}
    }else{
    	N=-N;
    	p[0]=N%2;
    	tmp=N/2;
    	for(i=1;i<64;i++){
    		p[i]=tmp%2;
    		tmp=tmp/2;
    	}
    	tmp=p[0];
    	for(i=1;i<64;i++){
    		if(i%2!=0){
    			tmp2=p[i];
    			p[i]=(p[i]+tmp)%2;
    			tmp=(tmp2+tmp)/2;
    		}else{
    			tmp2=p[i];
    			p[i]=(p[i]+tmp)%2;
    			tmp=tmp2+(tmp2+tmp)/2;
    		}
    	}
    }
    flag=0;
    for(i=63;i>=0;i--){
    	if((p[i]==1)|(flag==1)){
    		cout<<p[i];
    		flag=1;
    	}
    }
    return 0;
}
