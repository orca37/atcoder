#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
	int H,W;
	cin >>H>>W;
	int area[H+1][W+1];
	int i,j;
	for(i=1;i<=H;i++){
		for(j=1;j<=W;j++){
			cin >> area[i][j];
		}
	}
	int tmp[H*W+1][4];
	int cnt=0;
	for(i=1;i<H;i++){
		for(j=1;j<=W;j++){
			if(area[i][j]%2==1){
				area[i][j]-=1;
				area[i+1][j]+=1;
				tmp[cnt][0]=i;
				tmp[cnt][1]=j;
				tmp[cnt][2]=i+1;
				tmp[cnt][3]=j;
				cnt++;
			}
		}
	}
	for(j=1;j<W;j++){
		if(area[H][j]%2==1){
				area[i][j]-=1;
				area[i][j+1]+=1;
				tmp[cnt][0]=H;
				tmp[cnt][1]=j;
				tmp[cnt][2]=H;
				tmp[cnt][3]=j+1;
				cnt++;
			}
		}
	cout << cnt <<endl;
	for(i=0;i<cnt;i++){
  	cout << tmp[i][0] << " " <<tmp[i][1]<< " " << tmp[i][2]<< " " <<tmp[i][3] <<endl;
}
	  return 0;
}
