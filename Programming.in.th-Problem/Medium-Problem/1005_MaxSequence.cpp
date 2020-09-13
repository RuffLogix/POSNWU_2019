/*
============================
Task : Max Sequence
Author : TEEJUTA SRIWARANON
LANGUAGE : C++
Trick : Dynamic Programming
============================
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //size of sequence;
    int n;
    cin >> n;

    //Sequence of number;
    int seq[n];

    //Input seq;
    for(int i=0 ; i<n ; i++){
        cin >> seq[i];
    }

    //Create Table to compute (DP);
    int table[n+1][n+1];
    memset(table,0,sizeof(table));

    //Declare mx variable to store maximum value;
    int mx = -1;
    //Declare loc to store location of result in table;
    pair<int,int> loc;

    //Processing Loop (DP);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ;j++){
            if(i==j){
                table[i][j] = seq[i-1];
            }else{
                table[i][j] = table[i][j-1] + seq[j-1];
            }
            if(mx < table[i][j]){
                loc.first = i;
                loc.second = j;
                mx = table[i][j];
            } 
        }
    }

    //Check mx if mx <= 0 print "Empty sequence";
    if(mx>0){
        for(int i=loc.first ; i<=loc.second ; i++){
            cout << seq[i-1] << " ";
        }
        cout << endl << mx;
    }else{
        cout << "Empty sequence";
    }

    return 0;
}