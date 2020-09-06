#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int student_n;

    cin >> student_n;

    string student_id[student_n];

    for(int i=0 ; i<student_n ; i++){
        cin >> student_id[i];
    }

    int different_index = 0; 

    for(int i=0 ; i<student_n-1 ; i++){
        for(int j=i+1 ; j<student_n ; j++){
            if(student_id[i][0] == student_id[j][0]){
                different_index++;
            }else if(student_id[i][1] == student_id[j][1]){
                different_index++;
            }else if(student_id[i][2] == student_id[j][2]){
                different_index++;
            }
        }
    }

    cout << different_index;

    return 0;
}