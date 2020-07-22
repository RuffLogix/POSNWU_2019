#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;

    int mine[x][y],mine2[x+1][y+1];

    memset(mine2,0,sizeof(mine2));

    for(int i=0 ; i<x ; i++){
        for(int j=0 ; j<y ; j++){
            cin >> mine[i][j];
        }
    }

    for(int j=y-1 ; j>=0 ; j--){
        for(int i=0 ; i<x ; i++){
            if(i==0){
                mine2[i][j] = mine[i][j] + mine2[i][j+1];
            }else{
                mine2[i][j] = mine[i][j] + max(mine2[i][j+1],max(mine2[i+1][j+1],mine2[i-1][j+1]));
            }
        }
    }

    int mx = 0;

    for(int i=0 ; i<x ; i++){
        if(mx<mine2[i][0]){
            mx = mine2[i][0];
        }
    }
    cout << mx;
}
