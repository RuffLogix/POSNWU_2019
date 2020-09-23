#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x;
    cin >> x;

    int mx=x,mn=x;

    while(n>1){
        cin >> x;
        if(mx < x){
            mx = x;
        }
        if(mn > x){
            mn = x;
        }
        n--;
    }

    cout << mn << endl << mx;

    return 0;
}