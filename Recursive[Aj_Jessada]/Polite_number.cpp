/*
============================
Task : Polite Number
Author : TEEJUTA SRIWARANON
LANGUAGE : C++
Trick : Memorization
============================
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    bool polite[500001];
    memset(polite,true,sizeof(polite));

    for(int i=1 ; i<500001 ; i=2*i){
        polite[i] = false;
    }

    for(int i=0 ; i<n ; i++){
        int m;
        cin >> m;
        int cnt = 0;
        for(int j=2; j<=m/2 ; j++){
            if(polite[j] and polite[m-j]){
                cnt++;
            }
        }
        cout << cnt;
    }

    return 0;
}