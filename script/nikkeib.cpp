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
    int n;
    string s1,s2,s3;
    cin >> n>> s1 >> s2 >> s3;
    int i,tmp;
    int ans=0;
    for(i=0;i<n;i++){
      tmp=2;
      if(s1[i]==s2[i])tmp--;
      if(s2[i]==s3[i])tmp--;
      if(s3[i]==s1[i])tmp--;
      if(tmp<0)tmp=0;
      ans+=tmp;
    }
    cout << ans;
    return 0;
}
