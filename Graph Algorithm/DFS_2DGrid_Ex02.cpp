#include <bits/stdc++.h>

using namespace std;

const int x = 6;
const int y = 8;

int table[x][y] = {
    {1,4,4,4,4,3,3,1},
    {2,1,1,4,3,3,1,1},
    {3,2,1,1,2,3,2,1},
    {3,3,2,1,2,2,2,2},
    {3,1,3,1,1,4,4,4},
    {1,1,3,1,1,4,4,4}
};

pair<int,int> type_num = make_pair(0,-1);

int cnt_tile = 0;
bool visited[x][y];

bool is_valid(int x_,int y_){
    if(x_<0 || y_<0){
        return false;
    }
    if(x_>=x || y_>=y){
        return false;
    }
    if(visited[x_][y_]){
        return false; 
    }
    return true;
}

void solve(int x_,int y_){
    cnt_tile++;
    visited[x_][y_] = true;
    if(is_valid(x_+1,y_) && table[x_][y_] == table[x_+1][y_]){
        solve(x_+1,y_);
    }
    if(is_valid(x_-1,y_) && table[x_][y_] == table[x_-1][y_]){
        solve(x_-1,y_);
    }
    if(is_valid(x_,y_+1) && table[x_][y_] == table[x_][y_+1]){
        solve(x_,y_+1);
    }
    if(is_valid(x_,y_-1) && table[x_][y_] == table[x_][y_-1]){
        solve(x_,y_-1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    memset(visited,false,sizeof(visited));

    for(int i=0 ; i<x ; i++){
        for(int j=0 ; j<y ; j++){
            if(!visited[i][j]){
                cnt_tile = 0;
                solve(i,j);
                if(type_num.second<cnt_tile){
                    type_num.second = cnt_tile;
                    type_num.first = table[i][j];
                }
            }
        }
    }

    cout << type_num.first << " " << type_num.second;

    return 0;
}