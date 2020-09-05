#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Declare size of brick (x,y);
    int x,y;

    //Input Y and X;
    cin >> y >> x;

    //Declare Brick to store map;
    char brick[y][x];

    //Input Brick in Y-Axis;
    for(int i=0 ; i<y ; i++){
        cin >> brick[i];
    }

    //Declare rock to store rock in Y-Axis;
    int rock[x];

    //Input rock;
    for(int i=0 ; i<x ; i++){
        cin >> rock[i];
    }

    //Processing 
    for(int i=0 ; i<x ; i++){
        for(int j=0 ; j<y ; j++){
            //If brick[i][j] = O ; the upper of brick[i][j] assigned by '#;
            if(brick[j][i] == 'O'){
                for(int k=j-1 ; k>=j-rock[i] ; k--){
                    if(k<0){
                        break;
                    }
                    brick[k][i] = '#';
                }
                break;
            }
            //If j = y-1 ; the upper of brick[i][j] assigned by '#;
            if(j==y-1){
                for(int k=y-1 ; k>=y-rock[i] ; k--){
                    if(k<0){
                        break;
                    }
                    brick[k][i] = '#';
                }
                break;
            }
        }
    }

    //Show character in brick;
    for(int i=0 ; i<y ; i++){
        for(int j=0 ; j<x ; j++){
            cout << brick[i][j];
        }
        cout << endl;
    }

    return 0;
}