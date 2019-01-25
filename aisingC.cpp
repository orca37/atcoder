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
int BFS(int i,int j,string S[],int visited[],int b[],int H,int W){
  visited[i*W+j]=1;
  if(S[i][j]=='#')b[0]++;
  if(S[i][j]=='.')b[1]++;
  if(((i<H-1)&&(S[i+1][j]!=S[i][j]))&&(visited[(i+1)*W+j]==0))BFS(i+1,j,S,visited,b,H,W);
  if(((j<W-1)&&(S[i][j+1]!=S[i][j]))&&(visited[i*W+j+1]==0))BFS(i,j+1,S,visited,b,H,W);
  if(((i>0)&&(S[i-1][j]!=S[i][j]))&&(visited[(i-1)*W+j]==0))BFS(i-1,j,S,visited,b,H,W);
  if(((j>0)&&(S[i][j-1]!=S[i][j]))&&(visited[i*W+j-1]==0))BFS(i,j-1,S,visited,b,H,W);
  return 0;
}

int main(){
    int H,W;
    cin >> H >> W;
    string S[H];
    int visited[H*W];
    int i,j;
    for(i=0;i<H;i++){
      for(j=0;j<W;j++){
        visited[i*W+j]=0;
      }
      cin >> S[i];
    }
    ll ans=0;
    int b[2];
    for(i=0;i<H;i++){
      for(j=0;j<W;j++){
        b[0]=0;
        b[1]=0;
        if(visited[i*W+j]==0)BFS(i,j,S,visited,b,H,W);
        ans+=b[0]*b[1];
      }
    }
    cout << ans;
    return 0;
}
