#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int magic_square[n][n];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> magic_square[i][j];
        }
    }

    int pre_value = 0,this_value = 0;

    for(int i=0 ; i<n ; i++){
        this_value=0;
        for(int j=0 ; j<n ; j++){
            if(i!=0){
                this_value+=magic_square[i][j];
            }else{
                pre_value+=magic_square[i][j];
                this_value = pre_value;
            }
        }
        if(pre_value != pre_value){
            cout << "No";
            return 0;
        }
        pre_value = this_value;
    }
}