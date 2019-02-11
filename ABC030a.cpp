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
    double A,B,C,D;
    cin >> A >> B >> C >> D;
    if(B/A>D/C)cout << "TAKAHASHI"<<endl;
    else if(B/A<D/C)cout <<"AOKI"<<endl;
    else cout << "DRAW"<<endl;
    return 0;
}
