#include <bits/stdc++.h>

using namespace std;

int main(){
    int container[] = {2,5,19,4,20};
    int result[5];

    //container[n] = container[n] - container[n-1]
    adjacent_difference(container,container+5,result);

    for(int i=0 ; i<5 ; i++)cout << result[i] << " ";

    //Output : 2 3 14 -15 16

    return 0;
}