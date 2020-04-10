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
    string S;
    cin >> S;
    ll i=0;
    while(i<S.size()){
        if(i>=S.size()-4){
            cout << "NO" <<endl;
            return 0;
        }
        if(S.substr(i,5)=="erase"){
            i+=5;
            if(i<S.size()&&S[i]=='r')i++;
        }else if(S.substr(i,5)=="dream"){
            i+=5;
            if(i+2==S.size()||S[i+2]!='a'){
                if(S.substr(i,2)=="er")i+=2;
            }
        }else {
            cout << "NO" <<endl;
            return 0;
        }
    }
    cout << "YES"<<endl;
    return 0;
}
