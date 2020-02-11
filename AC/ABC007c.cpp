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
	int R,C;
	int sx,sy;
	int gx,gy;
	cin >> R >> C >> sx >> sy >> gx >> gy;
	string c;
	int maze[R][C];
	int i,j;
	for(i=0;i<R;i++){
		cin >> c;
		for(j=0;j<C;j++){
			if(c[j]=='#')maze[i][j]=1000000;else maze[i][j]=-1; 
		}
	}
	queue< pair< int ,int > > que;
	que.push(make_pair(sx-1,sy-1));
	maze[sx-1][sy-1]=0;
	pair< int,int > tmp;
	while(!que.empty()){
		tmp=que.front();
		que.pop();
		if(maze[tmp.first-1][tmp.second]==-1){
			maze[tmp.first-1][tmp.second]=maze[tmp.first][tmp.second]+1;
			que.push(make_pair(tmp.first-1,tmp.second));
		}
		if(maze[tmp.first+1][tmp.second]==-1){
			maze[tmp.first+1][tmp.second]=maze[tmp.first][tmp.second]+1;
			que.push(make_pair(tmp.first+1,tmp.second));
		}
		if(maze[tmp.first][tmp.second-1]==-1){
			maze[tmp.first][tmp.second-1]=maze[tmp.first][tmp.second]+1;
			que.push(make_pair(tmp.first,tmp.second-1));
		}
		if(maze[tmp.first][tmp.second+1]==-1){
			maze[tmp.first][tmp.second+1]=maze[tmp.first][tmp.second]+1;
			que.push(make_pair(tmp.first,tmp.second+1));
		}
	}
	cout << maze[gx-1][gy-1] <<endl;
    return 0;
}
