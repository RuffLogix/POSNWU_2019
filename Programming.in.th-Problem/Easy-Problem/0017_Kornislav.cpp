#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[4];

    for(int i=0 ; i<4 ; i++){
        cin >> a[i];
    }

    sort(a,a+4);

    cout << min(a[0],a[1])*min(a[3],a[2]);

    return 0;
}