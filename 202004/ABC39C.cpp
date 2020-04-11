#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<cctype>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll h,w;
    cin >> h >> w;
    ll i,j,dx,dy;
    bool flag;
    string s[h];
    char a[h][w];
    for(i=0;i<h;i++){
        cin >> s[i];
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            flag=true;
            for(dx=-1;dx<=1;dx++){
                for(dy=-1;dy<=1;dy++){
                      if(i+dx>=0&&i+dx<h&&j+dy>=0&&j+dy<w&&s[i+dx][j+dy]=='.')flag=false;
                }
            }
            if(flag)a[i][j]='#';else a[i][j]='.';
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(s[i][j]=='#'){
                flag=false;
                for(dx=-1;dx<=1;dx++){
                    for(dy=-1;dy<=1;dy++){
                          if(i+dx>=0&&i+dx<h&&j+dy>=0&&j+dy<w&&a[i+dx][j+dy]=='#')flag=true;
                    }
                }
                if(!flag){
                    cout << "impossible";
                    return 0;
                }
            }
        }
    }
    cout << "possible" <<endl;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
