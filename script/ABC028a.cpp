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
    int N;
    cin >> N;
    if(N<=59)cout << "Bad"<<endl;
    else if(N<=89)cout <<"Good"<<endl;
    else if(N<=99)cout <<"Great"<<endl;
    else if(N==100)cout <<"Perfect"<<endl;
    return 0;
}
