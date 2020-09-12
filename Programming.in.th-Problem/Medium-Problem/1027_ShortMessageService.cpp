#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string vote = " ";
    pair<int,char> v[7];
    for(int i=0 ; i<7 ; i++){
        v[0].first = 0;
    }

    v[0].second = 'A';
    v[1].second = 'B';
    v[2].second = 'C';
    v[3].second = 'D';
    v[4].second = 'E';
    v[5].second = 'F';
    v[6].second = 'G';

    while(vote!="!"){
        cin >> vote;
        int check[7];
        memset(check,0,sizeof(check));
        for(int i=0 ; i<vote.length() ; i++){
            if(vote[i]=='A'){
                check[0]++;
            }else if(vote[i]=='B'){
                check[1]++;
            }else if(vote[i]=='C'){
                check[2]++;
            }else if(vote[i]=='D'){
                check[3]++;
            }else if(vote[i]=='E'){
                check[4]++;
            }else if(vote[i]=='F'){
                check[5]++;
            }else if(vote[i]=='G'){
                check[6]++;
            }
        }
        int ck1 = 0;
        int m = min(*check,*check+7);
        if(check[0]==m)ck1++;
        if(check[1]==m)ck1++;
        if(check[2]==m)ck1++;
        if(check[3]==m)ck1++;
        if(check[4]==m)ck1++;
        if(check[5]==m)ck1++;
        if(check[6]==m)ck1++;

        if(check[0]!=m || ck1!=1)v[0].first+=check[0];
        if(check[1]!=m || ck1!=1)v[1].first+=check[1];
        if(check[2]!=m || ck1!=1)v[2].first+=check[2];
        if(check[3]!=m || ck1!=1)v[3].first+=check[3];
        if(check[4]!=m || ck1!=1)v[4].first+=check[4];
        if(check[5]!=m || ck1!=1)v[5].first+=check[5];
        if(check[6]!=m || ck1!=1)v[6].first+=check[6];
        
    }

    sort(v,v+7);

    for(int i=0 ; i<7 ; i++){
        cout << v[i].second <<  " " << v[i].first << endl;
    }

    return 0;
}