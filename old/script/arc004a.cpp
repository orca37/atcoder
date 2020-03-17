#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
using namespace std;
#define ll long long
int main(){
    int N;
    cin >> N;
    int i,j;
    double max=0;
    double x[N],y[N];
    for(i=0;i<N;i++){
      cin >> x[i] >> y[i];
    }
    for(i=0;i<N;i++){
      for(j=i+1;j<N;j++){
        if(max<sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2))){
            max=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
        }
      }
    }
    cout << max<< endl;
    return 0;
}
