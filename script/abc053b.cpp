#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int i;
    int mina=-1,maxz=-1;
    i=0;
    while(mina==-1){
      if(s[i]=='A')mina=i;
      i++;
    }
    i=s.size()-1;
    while(maxz==-1){
      if(s[i]=='Z')maxz=i;
      i--;
    }
    cout<<maxz-mina+1;
    return 0;
}
