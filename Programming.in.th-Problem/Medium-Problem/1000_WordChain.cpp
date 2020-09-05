#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /*
        word_size to store size of word;
        chain_length to store chain length;
    */

    int word_size,chain_length;

    //Input word_size and chain_length;
    cin >> word_size >> chain_length;

    /*
        pre_word to store previous word;
        word to store present word;
    */
    string pre_word,word;

    //Input First Word;
    cin >> pre_word;

    //Input chain_length-1 times
    for(int i=1 ; i<chain_length ; i++){

        //different_index to store number of mistake;
        int different_index = 0;        

        //Input Second Word;
        cin >> word;

        //Loop to Find Mistake;
        for(int j=0 ; j<word_size ; j++){
            if(pre_word[j]!= word[j]){
                different_index ++;
            }
        }

        //If different_index > 2 print pre_word and stop program;
        if(different_index > 2){
            //Show pre_word;
            cout << pre_word;
            return 0;
        }

        //Set pre_word = word;
        pre_word = word;
    }

    //Show pre_word;
    cout << pre_word;

    return 0;
}