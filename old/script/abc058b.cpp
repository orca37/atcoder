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
    string a,b;
    cin >> a >>b;
    int i;
    for(i=0;i<b.size();i++){
      cout << a[i] << b[i];
    }
    if(a.size()>b.size())cout << a[a.size()-1]<<endl;
    return 0;
}
