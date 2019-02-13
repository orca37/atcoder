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
    string s1,s2;
    cin >> s1 >>s2;
    char a1[s1.size()],a2[s2.size()];
    ll i;
    for(i=0;i<s1.size();i++)a1[i]=s1[i];
    for(i=0;i<s2.size();i++)a2[i]=s2[i];
    sort(a1,a1+s1.size());
    sort(a2,a2+s2.size());
    for(i=0;i<s1.size();i++)s1[i]=a1[i];
    for(i=0;i<s2.size();i++)s2[s2.size()-i-1]=a2[i];
    if(s1<s2)cout << "Yes";else cout << "No";
    return 0;
}
