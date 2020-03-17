#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
#define ll long long
int main(){
    int D,G;
    cin  >> D >> G;
    ll p[D+1],c[D+1];
    int i,j;
    for(i=0;i<D;i++){
        cin >>p[i]>>c[i];
    }
    p[D]=0;
    c[D]=0;
    int min=10000;
    int max;
    int ptmp;
    int ntmp;
    for(i=0;i<(1<<D);i++){
        ptmp=0;
        ntmp=0;
        max=D;
        for(j=0;j<D;j++){
            if((i>>j)&1){
                ptmp+=(j+1)*100*p[j]+c[j];
                ntmp+=p[j];
            }else{
                max=j;
            }
        }
        if(ptmp<G){
            if((G-ptmp)/(100*(max+1))<=p[max]){
                ntmp+=(G-ptmp+100*(max+1)-1)/(100*(max+1));
            }else{
                ntmp=10000;
            }
        }
        //cout << ntmp <<endl;
        if(min>ntmp){
            min=ntmp;
        }
    }
    cout << min <<endl;
}
