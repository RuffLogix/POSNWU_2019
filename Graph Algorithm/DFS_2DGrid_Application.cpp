#include <bits/stdc++.h>

using namespace std;

const int n = 6;
int Grid[n][n] = {
                    {0,0,1,0,1,1},
                    {0,1,1,0,0,1},
                    {0,1,0,0,0,0},
                    {1,0,1,1,0,0},
                    {0,0,0,1,0,0},
                    {0,1,1,0,1,1}
                 };

bool visited[n][n];

bool is_valid(int x,int y){
    if(x<0 || y<0){
        return false;
    }
    if(x>=n || y>=n){
        return false;
    }
    if(Grid[x][y]==0){
        return false;
    }
    if(visited[x][y]==true){
        return false;
    }
    return true;
}

void solve(int x,int y){
    if(is_valid(x,y))visited[x][y] = true;

    if(is_valid(x-1,y)){
        solve(x-1,y);
    }
    if(is_valid(x+1,y)){
        solve(x+1,y);
    }
    if(is_valid(x,y-1)){
        solve(x,y-1);
    }
    if(is_valid(x,y+1)){
        solve(x,y+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    memset(visited,false,sizeof(visited));

    int cnt = 0;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(visited[i][j]==false && Grid[i][j]==1){
                cnt++;
                solve(i,j);
            }
        }
    }

    cout << cnt;

    return 0;
}
