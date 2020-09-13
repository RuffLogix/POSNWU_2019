/*
============================
Task : Rotten Oranges
Author : TEEJUTA SRIWARANON
LANGUAGE : C++
Trick : BFS 2D Grid.
============================
*/

#include <bits/stdc++.h>

using namespace std;

//Declare basket to store position of oranges;
int basket[100][100];
bool visited[100][100];
//Declare mx_day to store maximum day to rotten;
int mx_day = 0;

//Check valid Function;
bool is_valid(int x,int y,int max_x,int max_y){

    //Check out of border;
    if(x<0 || y<0) return false;
    if(x>=max_x || y>=max_y) return false;
    //Check What's in it;
    if(basket[x][y] == 0 || basket[x][y] == 2) return false;
    //Check visited;
    if(visited[x][y]) return false;

    return true;
}

void solve(int x,int y,int max_x,int max_y){
    //Create Queue to store position to use BFS 2D Grid;
    queue<pair<int,int>> q;
    //Add source position to queue;
    q.push(make_pair(x,y));
    //Check q not empty;
    while(!q.empty()){

        int q_x = q.front().first;
        int q_y = q.front().second;
        //Set visited[q_x][q_y] = true;
        visited[q_x][q_y] = true;

        int check = 0;
        //check up/down/left/right;
        if(is_valid(q_x+1,q_y,max_x,max_y)){
            check++;
            q.push(make_pair(q_x+1,q_y));
        }
        if(is_valid(q_x-1,q_y,max_x,max_y)){
            check++;
            q.push(make_pair(q_x-1,q_y));
        }
        if(is_valid(q_x,q_y+1,max_x,max_y)){
            check++;
            q.push(make_pair(q_x,q_y+1));   
        }
        if(is_valid(q_x,q_y-1,max_x,max_y)){
            check++;
            q.push(make_pair(q_x,q_y-1));
        }

        //Check if up/down/left/right was updated and Check if mx_day<check;
        if(check>0 && mx_day<check){
            mx_day = check;
        }
        q.pop(); 
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Declare n_testcase to store how many testcase;
    int n_testcase;
    cin >> n_testcase;

    while(n_testcase>0){
        //Declare size of basket;
        int x,y;
        cin >> x >> y;

        mx_day = 0;

        //Input Loop;
        for(int i=0 ; i<x ; i++){
            for(int j=0 ; j<y ; j++){
                cin >> basket[i][j];
            }
        }

        memset(visited,false,sizeof(visited));

        //Computing loop;
        for(int i=0 ; i<x ; i++){
            for(int j=0 ; j<y ; j++){
                //if basket[i][j] is rotten;
                if(basket[i][j]==2){
                    solve(i,j,x,y);
                }
            }
        }

        //Check basket[i][j] what position is fresh;
        bool is_fresh = false;

        //Output Loop;
        for(int i=0 ; i<x ; i++){
            for(int j=0 ; j<y ; j++){
                if(basket[i][j]==1 && visited[i][j]==false){
                    cout << "-1" << endl;
                    is_fresh = true;
                    i=x;
                    break;
                }
            }
        }

        //Check is_fresh;
        if(!is_fresh)cout << mx_day << endl;

        //Next;
        n_testcase--;
    }

    return 0;
}