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
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin >> N;
    ll i,a;
    ll color[8],t1=0,t2=0;
    for(i=0;i<8;i++){
        color[i]=0;
    }
    for(i=0;i<N;i++){
        cin >>a;
        if(a<3200)color[a/400]=1;else t2++;
    }
     for(i=0;i<8;i++){
        t1+=color[i];
    }
    cout << max(t1,(ll)1) <<" "<< t1+t2 <<endl;
    return 0;
}
