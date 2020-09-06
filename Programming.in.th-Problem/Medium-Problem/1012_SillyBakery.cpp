#include <bits/stdc++.h> 

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //number of order;
    int n_order;

    //Input n_order;
    cin >> n_order;

    //Declare c to store piece of cake;
    float c[5];
    memset(c,0,sizeof(c));

    //Input Loop;
    for(int i=0 ; i<n_order ; i++){
        //Input c[0] c[1] c[2] c[3] c[4];
        for(int j=0 ; j<5 ; j++){
            int x;
            cin >> x;
            c[j] += x;
        }
    }

    //Show Result;
    cout << ceil((c[0]*8+c[1]*6+c[2]*4+c[3]*2+c[4])/8);

    return 0;
}