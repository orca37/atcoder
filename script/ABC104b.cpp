#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
	string s;
    cin >> s;
    if(s[0]!='A'){
    	cout << "WA";
    	return 0;
    }
    if(s[1]=='C'){
    	cout << "WA";
    	return 0;
    }
    if(s[s.size()-1]=='C'){
    	cout << "WA";
    	return 0;
    }
    int i;
    int count;
    for(i=1;i<s.size();i++){
    	if(!((s[i]>='a')&&(s[i]<='z'))){
    		if(s[i]!='C'){
    			cout << "WA";
    			return 0;
   			}else{
   				count+=1;
   			}
    	}
    }
		if(count!=1){
			cout << "WA";
    		return 0;
		}
	cout << "AC";
    return 0;
}
