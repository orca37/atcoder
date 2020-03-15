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
using namespace std;
#define ll long long
int main(){
	int A[9];
    int i,j;
    for(i=0;i<9;i++){
        cin >> A[i];
    }
    int N,b;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> b;
        for(j=0;j<9;j++){
            if(A[j]==b)A[j]=0;
        }
    }
    bool flag=false;
    if(A[0]==0 && A[3]==0&&A[6]==0)flag=true;
    if(A[1]==0 && A[4]==0&&A[7]==0)flag=true;
    if(A[2]==0 && A[5]==0&&A[8]==0)flag=true;
    if(A[0]==0 && A[1]==0&&A[2]==0)flag=true;
    if(A[3]==0 && A[4]==0&&A[5]==0)flag=true;
    if(A[6]==0 && A[7]==0&&A[8]==0)flag=true;
    if(A[0]==0 && A[4]==0&&A[8]==0)flag=true;
    if(A[2]==0 && A[4]==0&&A[6]==0)flag=true;
    if(flag)cout << "Yes";else cout << "No";
    return 0;
}
