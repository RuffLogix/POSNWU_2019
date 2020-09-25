#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x[n];
    for(int i=0 ; i<n ; i++){
        cin >> n;
    }

    sort(x,x+n);

    while(true){
        int check = 0;
        int a = 1;
        for(int i=0 ; i<n ; i++){
            if(x[n-1]*a%x[i]==0)check++;
        }
        if(check==n){
            cout << x[n-1]*a;
            return 0;
        }
    }

    return 0;
}