/*
============================
Task : Filter
Author : TEEJUTA SRIWARANON
LANGUAGE : C++
Trick : -
============================
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /*
        x : width;
        y : height;
        n : number of filter;
    */
    int x,y,n;

    //Input x,y and n;
    cin >> x >> y >> n;

    //Declare filter to store number of filter in other layer;
    int filter[x];
    //Set all index's value = 0;
    memset(filter,0,sizeof(filter));

    //Input Loop;
    for(int i=0 ; i<n ; i++){
        int p1,p2;
        cin >> p1 >> p2;
        //Count filter Loop;
        for(int j=p1 ; j<p1+p2 ; j++){
            if(j>x)break;
            filter[j]++;
        }
    }

    //Check variable;
    int filter_100=0 , filter_50=0;

    //The last Loop; (Check Loop);
    for(int i=0 ; i<x ; i++){
        if(filter[i]==0){
            filter_100++;
        }
        if(filter[i]==1){
            filter_50++;
        }
    }

    //Show Result; 
    cout << filter_100*y << " " << filter_50*y;

    return 0;
}