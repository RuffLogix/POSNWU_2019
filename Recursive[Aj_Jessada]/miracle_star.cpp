/*
============================
Task : Miracle Star
Author : TEEJUTA SRIWARANON
LANGUAGE : C++
Trick : -
============================
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n_size;
    char pattern;
    cin >> pattern >> n_size;

    for(int i=0 ; i<(2*n_size)+1 ; i++){
        for(int j=0 ; j<(2*n_size)+1 ; j++){
            if(i==n_size or j==n_size or i==j or i+j == 2*n_size){
                cout << "+";
            }else if(i<=j+n_size and i>=j-n_size and i+j<=3*n_size and i+j>=n_size){
                cout << "#";
            }else{
                cout << ".";
            }
        }   
        cout << endl;
    }

    return 0;
}