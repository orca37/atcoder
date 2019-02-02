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
    string s1,s2,s3;
    cin >> s1 >> s2 >>s3;
    string ans=s1.substr(0,1)+s2.substr(0,1)+s3.substr(0,1);
    transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
    cout << ans;
    return 0;
}
