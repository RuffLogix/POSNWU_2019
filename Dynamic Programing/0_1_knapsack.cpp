#include <bits/stdc++.h>

using namespace std;

int solve(int bag, int w[], int v[], int n){

    int table[n + 1][bag + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= bag; j++) {
            if (i == 0 || j == 0){
                table[i][j] = 0;
            }else if (w[i - 1] <= j){
                table[i][j] = max(v[i - 1] + table[i - 1][j - w[i - 1]],table[i - 1][j]);
            }
            else{
                table[i][j] = table[i - 1][j];
            }
        }
    }

    return table[n][bag];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t!=0){
        int n,bag;
        cin >> n >> bag;
        int v[n],w[n];
        for(int i=0 ; i<n ;i++){
            cin >> v[i];
        }
        for(int i=0 ; i<n ;i++){
            cin >> w[i];
        }
        cout << solve(bag,w,v,n) << endl;
        t--;
    }
}
