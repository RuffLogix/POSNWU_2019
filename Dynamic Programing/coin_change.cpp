#include <bits/stdc++.h>

using namespace std;

int mem[100];

int solve(int n){

    mem[1] = 1;
    mem[3] = 1;
    mem[4] = 1;

    mem[2] = 2;

    for(int i = 5; i<=n ; i++){
        mem[i] = min(mem[i-1],min(mem[i-3],mem[i-4])) + 1;
    }
    return mem[n];

}

int main(){
    int a[] = {1,3,4};

    int n;
    cin >> n;
    cout << solve(n);
}