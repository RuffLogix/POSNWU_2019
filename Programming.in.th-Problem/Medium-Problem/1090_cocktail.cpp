#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int tail[n];
    for(int i=0 ; i<n ; i++){
        cin >> tail[i];
    }

    int A;
    cin >> A;

    int cnt = 0;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(tail[i]+tail[j]==A){
                cnt++;
                i++;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}