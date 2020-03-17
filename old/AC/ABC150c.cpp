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
	int P[N],Q[N];
	int i,tmp=1;
	for(i=0;i<N;i++){
		cin >> P[i];
	}
	for(i=0;i<N;i++){
		cin >> Q[i];
	}
	for(i=1;i<N;i++){
		tmp*=i;
	}
	int j;
	int a=0,b=0;
	int psm,qsm;
	for(i=0;i<N-1;i++){
		psm=0;qsm=0;
		for(j=i+1;j<N;j++){
			if (P[i]>P[j])psm++;
			if (Q[i]>Q[j])qsm++;
		}
		a+=tmp*psm;
		b+=tmp*qsm;
		tmp=tmp/(N-1-i);
	}
	cout << abs(a-b)<<endl;
    return 0;
}
