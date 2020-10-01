/*
============================
Task : Factor
Author : TEEJUTA SRIWARANON
LANGUAGE : C++
Trick : Prime Memorization , Condition consider
============================
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    //Memorization;
    bool prime[30001];
    memset(prime,true,sizeof(prime));
    int prime_size = 30001;

    //Find prime;
    for(int i=2 ; i<30001 ; i++){
        if(prime[i]){
            for(int j=2*i ; j<30001 ; j=j+i){
                prime[j] = false;
            }
        }
    }

    //Solving Loop;
    for(int i=2 ; i<prime_size ; i++){
        if(n%i==0 and prime[i] and prime[n/i]){
            cout << i+(n/i);
            return 0;
        }
    }
        
    cout << "0";

    return 0;
}