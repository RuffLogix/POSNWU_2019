#include <bits/stdc++.h>

using namespace std;

int table[5][5];
bool visited[5][5];

bool is_valid(int x,int y){
    if(x<0 || y<0){
        return false;
    }
    if(x>=5 || y>=5){
        return false;
    }
    if(visited[x][y]){
        return false;
    }
    return true;
}

void solve(int x,int y,int target_x,int target_y){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    visited[x][y] = true;
    while(!q.empty()){
        int cur_x = q.front().first;
        int cur_y = q.front().second;

        int dir_x[] = {0,0,1,-1};
        int dir_y[] = {1,1,0,0};

        for(int i=0 ; i<4 ; i++){
            if(is_valid(cur_x+dir_x[i],cur_y+dir_y[i])){
                visited[cur_x+dir_x[i]][cur_y+dir_y[i]] = true;
                q.push(make_pair(cur_x+dir_x[i],cur_y+dir_y[i]));
                table[cur_x+dir_x[i]][cur_y+dir_y[i]] = table[cur_x][cur_y] + 1;
            }
        }
        q.pop();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    memset(table,0,sizeof(table));
    memset(visited,false,sizeof(table));

    solve(0,0,1,2);
    cout << table[2][2];

    return 0;
}
