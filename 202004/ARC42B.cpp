c#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<bitset>
#include<math.h>
using namespace std;
#define ll long long

int main(){
    double x0,y0;
    ll N,i;
    cin >> x0 >> y0 >> N;
    double x[N],y[N];
    double ans=1000000000;
    for(i=0;i<N;i++){
        cin >> x[i] >>y[i];
        ans=min(ans,sqrt(pow(x[i]-x0,2)+pow(y[i]-y0,2)));
    }
    double xt,yt,x1,x2,y1,y2,a,b,c;
    for(i=0;i<N;i++){
        x1=x[i];
        y1=y[i];
        x2=x[(i+1)%N];
        y2=y[(i+1)%N];
        a=y1-y2;
        b=x2-x1;
        c=x1*y2-y1*x2;
        xt=(b*(b*x0-a*y0)-a*c)/(a*a+b*b);
        yt=(a*(-b*x0+a*y0)-b*c)/(a*a+b*b);
        if((xt-x1)*(xt-x2)<0)ans=min(ans,sqrt(pow(xt-x0,2)+pow(yt-y0,2)));
    }
    cout << setprecision(15) << ans<<endl;
    return 0;
}
