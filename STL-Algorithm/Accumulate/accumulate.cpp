#include <bits/stdc++.h>

using namespace std;

int main(){

    int container[] = {2,5,19,4,20};

    /*
        int size = sizeof(container)/sizeof(container[0]);
        int sum = 0;
        for(int i=0 ; i<size ; i++){
            sum += container[i];
        }
        cout << sum;
    */


    //accumulate(begin,end,value)
    cout << accumulate(container,container+5,0) << endl;

    //Output : 50

    return 0;
}