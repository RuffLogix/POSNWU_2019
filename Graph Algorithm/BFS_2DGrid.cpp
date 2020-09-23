#include <bits/stdc++.h>

using namespace std;

int table[3][3];
bool visited[3][3];
const int n = 3;

bool is_valid(int x,int y){
    if(x<0 || y<0){
        return false;
    }
    if(x>=n || y>=n){
        return false;
    }
    if(visited[x][y]){
        return false;
    }
    return true;
}

void solve(int x,int y){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    visited[x][y] = true;
    while(!q.empty()){
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        cout << cur_x << " " << cur_y << endl;
        if(is_valid(cur_x+1,cur_y)){
            q.push(make_pair(cur_x+1,cur_y));
            visited[cur_x+1][cur_y] = true;
        }
        if(is_valid(cur_x-1,cur_y)){
            q.push(make_pair(cur_x-1,cur_y));
            visited[cur_x-1][cur_y] = true;
        }
        if(is_valid(cur_x,cur_y+1)){
            q.push(make_pair(cur_x,cur_y+1));
            visited[cur_x][cur_y+1] = true;
        }
        if(is_valid(cur_x,cur_y-1)){
            q.push(make_pair(cur_x,cur_y-1));
            visited[cur_x][cur_y-1] = true;
        }
        q.pop();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    memset(table,0,sizeof(table));
    memset(visited,false,sizeof(visited));

    solve(0,0);

    return 0;
}