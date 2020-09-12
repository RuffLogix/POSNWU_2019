#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int magic_square[n][n];

    int pre_value = 0,this_value = 0,r_value[n];
    memset(r_value,0,sizeof(r_value));
    int topleft_to_bottomrigth = 0,topright_to_bottomleft = 0;
    for(int i=0 ; i<n ; i++){
        this_value = 0;
        for(int j=0 ; j<n ; j++){
            cin >> magic_square[i][j];
            this_value+=magic_square[i][j];
            r_value[j]+=magic_square[i][j];

            if(i==j)topleft_to_bottomrigth+=magic_square[i][j];
            if(i+j==n-1)topright_to_bottomleft+=magic_square[i][j];
        }

        //column checker;
        if(i==n-1){
            for(int j=0 ; j<n ; j++){
                if(r_value[j] != pre_value){
                    cout << "No";
                    return 0;
                }
            }
        }

        //row checker;
        if(i!=0 && pre_value!=this_value){
            cout << "No";
            return 0;
        }

        pre_value = this_value;

    }

    if((topleft_to_bottomrigth!=pre_value) || (topright_to_bottomleft!=pre_value)){
        cout << "No";
        return 0;
    }
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            for(int k=0 ; k<n ; k++){
                for(int l=0 ; l<n ; l++){
                    if(magic_square[i][j]==magic_square[k][l] && (i!=k || j!=l)){
                        cout << "No";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes";

    return 0;
}