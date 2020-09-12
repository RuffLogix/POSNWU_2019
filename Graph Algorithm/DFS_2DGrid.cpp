#include <bits/stdc++.h>

#define n 3

using namespace std;

bool visited_Grid[n][n];

bool is_valid(int Grid[n][n],int x,int y){
    if(x<0 || y<0){
        return false;
    }
    if(x>=n || y>=n){
        return false;
    }
    if(visited_Grid[x][y]){
        return false;
    }

    return true;
}

void DFS(int Grid[n][n],int x,int y){
    cout << x << " " << y << "\n";
    visited_Grid[x][y] = true;
    if(is_valid(Grid,x-1,y)){
        DFS(Grid,x-1,y);
    }
    if(is_valid(Grid,x,y+1)){
        DFS(Grid,x,y+1);
    }
    if(is_valid(Grid,x+1,y)){
        DFS(Grid,x+1,y);
    }
    if(is_valid(Grid,x,y-1)){
        DFS(Grid,x,y-1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int Grid[n][n];
    memset(Grid,0,sizeof(Grid));

    memset(visited_Grid,false,sizeof(visited_Grid));
    DFS(Grid,0,0);

    return 0;
}