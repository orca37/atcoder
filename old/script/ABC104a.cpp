#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
	int R;
	cin >> R;
    if(R<1200){
    	cout << "ABC";
    }else if (R<2800){
    	cout << "ARC";
    }else {
    	cout << "AGC";
    }
    return 0;
}
