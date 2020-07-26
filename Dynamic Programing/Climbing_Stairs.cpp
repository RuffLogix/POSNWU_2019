#include <bits/stdc++.h>

using namespace std;

int solve(int n){
    double sqrt5=sqrt(5);
    double fibn=pow((1+sqrt5)/2,n+1)-pow((1-sqrt5)/2,n+1);
    return (fibn/sqrt5);
}

int main(){
    int n;
    cin >> n;
    cout << solve(n);
}
