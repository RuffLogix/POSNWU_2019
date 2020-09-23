#include <bits/stdc++.h>

using namespace std;

int basket[100][100];
bool visited[100][100];
int count_day[100][100];

bool is_valid(int x,int y,int max_x,int max_y){
    if(x<0 || y<0){
        return false;
    }
    if(x>=max_x || y>=max_y){
        return false;
    }
    if(basket[x][y]==0 || basket[x][y]==2){
        return false;
    }
    return true;
}

void solve(int x,int y,int max_x,int max_y){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while(!q.empty()){
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        
        int dir_x[] = {0,0,1,-1};
        int dir_y[] = {1,-1,0,0};

        visited[cur_x][cur_y] = true;

        for(int i=0 ; i<4 ; i++){
            if(is_valid(cur_x+dir_x[i],cur_y+dir_y[i],max_x,max_y)){
                if(!visited[cur_x+dir_x[i]][cur_y+dir_y[i]]){
                    q.push(make_pair(cur_x+dir_x[i],cur_y+dir_y[i]));
                }
            }
        }

        q.pop();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n_testcase;
    cin >> n_testcase;

    while(n_testcase>0){
        int x,y;
        cin >> x >> y;

        for(int i=0 ; i<x ; i++){
            for(int j=0 ; j<y ; j++){
                cin >> basket[i][j];
            }
        }

        memset(visited,false,sizeof(visited));
        memset(count_day,0,sizeof(count_day));

        for(int i=0 ; i<x ; i++){
            for(int j=0 ; j<y ; j++){
                if(basket[i][j]==2){
                    solve(i,j,x,y);
                }
            }
        }

        int mx_day = 0;
        bool is_fresh = false;
        for(int i=0 ; i<x ; i++){
            for(int j=0 ; j<y ; j++){
                if(mx_day < count_day[i][j]){
                    mx_day = count_day[i][j];
                }
                if(basket[i][j]==1){
                    cout << "-1" << endl;
                    i=x;
                    is_fresh = true;
                    break;
                }
            }
        }

        if(!is_fresh){
            cout << mx_day << endl;
        }
        n_testcase--;
    }

    return 0;
}