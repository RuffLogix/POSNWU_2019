#include <bits/stdc++.h>

using namespace std;

int table[201][201];

void solve(string a,string b){
    int n = a.length();
    int m = b.length();

    int mx=0,k,begin;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(a[i]==b[j]){
                for(k=0 ; k+i<n && k+j<m ; k++){
                    if(a[k+i]!=b[k+j])break;
                }
                if(mx<k){
                    mx=k;
                    begin = i;
                }
            }
        }
    }

    a = a.substr(begin,mx);
    cout << a;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a,b;
    cin >> a >> b;

    memset(table,0,sizeof(table));

    solve(a,b);

    return 0;
}