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
    int h,w;
    cin >> h >> w;
    int i;
    string s;
    for(i=0;i<w+2;i++){
      cout<<'#';
    }
    cout << endl;
    for(i=0;i<h;i++){
      cin >> s;
      cout <<'#'<< s <<'#'<<endl;
    }
    for(i=0;i<w+2;i++){
      cout<<'#';
    }
    cout << endl;
    return 0;
}
