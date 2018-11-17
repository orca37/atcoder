#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int N;
    cin >> N;
    if((N < 7)&&(N%4 == 3)){
    	cout <<"No";
    }else if ((N < 14)&&(N%4 == 2)){
    	cout <<"No";
    }else if ((N < 21)&&(N%4 == 1)){
    	cout <<"No";
    }else{
    	cout <<"Yes";
    }
    return 0;
}
