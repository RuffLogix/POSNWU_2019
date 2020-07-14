#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t) {
    int n_s = s.length()-1;
    int n_t = t.length()-1;

    for(int i=n_t ; i>=0 ; i--){
        if(n_s==-1)return true;
        if(t[i]==s[n_s]){
            n_s--;
        }
    }
    if(n_s==-1)return true;
    return false;
}


int main(){
    cout << isSubsequence("abc","ahbgdc");

    return 0;
}
