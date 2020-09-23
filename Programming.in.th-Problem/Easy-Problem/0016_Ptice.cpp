#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char Adrian[] = {'A','B','C'};
    char Bruno[] = {'B','A','B','C'};
    char Goran[] = {'C','C','A','A','B','B'};

    int n;
    cin >> n;

    string txt;
    cin >> txt;

    int score[3],mx;
    memset(score,0,sizeof(score));
    for(int i=0 ; i<txt.length() ; i++){
        if(Adrian[i%3]==txt[i]){
            score[0]++;
        }
        if(Bruno[i%4]==txt[i]){
            score[1]++;
        }
        if(Goran[i%6]==txt[i]){
            score[2]++;
        }
    }
    mx = *max_element(score,score+3);

    cout << mx << endl;
    if(score[0]==mx){
        cout << "Adrian" << endl;
    }

    if(score[1]==mx){
        cout << "Bruno" << endl;
    }

    if(score[2]==mx){
        cout << "Goran" << endl;
    }
    return 0;
}