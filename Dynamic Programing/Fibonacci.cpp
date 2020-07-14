#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    int fibo[n];
    fibo[0] = 1;
    fibo[1] = 1;
    for(int i=2 ; i<n ; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << fibo[n-1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    solve(n);

}