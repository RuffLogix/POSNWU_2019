#include <bits/stdc++.h>

using namespace std;

char map_r[1000][1000];
bool visited[1000][1000];

bool is_valid(int x,int y,int max_x,int max_y){
    if(x<0 || y<0){
        return false;
    }
    if(x>=max_x || y>=max_y){
        return false;
    }
    if(visited[x][y]){
        return false;
    }
    if(map_r[x][y]=='#'){
        return false;
    }
    return true;
}

void solve(int x,int y,int max_x,int max_y){
    visited[x][y] = true;
    if(is_valid(x+1,y,max_x,max_y)){
        solve(x+1,y,max_x,max_y);
    }
    if(is_valid(x-1,y,max_x,max_y)){
        solve(x-1,y,max_x,max_y);
    }
    if(is_valid(x,y+1,max_x,max_y)){
        solve(x,y+1,max_x,max_y);
    }
    if(is_valid(x,y-1,max_x,max_y)){
        solve(x,y-1,max_x,max_y);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=0 ; i<n ; i++){
        cin >> map_r[i];
    }

    int cnt = 0;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(!visited[i][j] && map_r[i][j]=='.'){
                cnt++;
                solve(i,j,n,m); 
            }
        }
    }

    cout << cnt;

    return 0;
}
