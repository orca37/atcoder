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
    char c[4][4];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin >> c[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << c[3-i][3-j] <<" ";
        }
        cout << endl;
    }
}