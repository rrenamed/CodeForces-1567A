/*
* Created by rrenamed
* Feel free to contribute explanations
* https://codeforces.com/contest/1560/submission/127462230
*/

#include <iostream>
using namespace std;

int main(){
    int tc = 0;
    cin >> tc;
    while(tc--){
        int length = 0;
        cin >> length;
        string letters = "";
        cin >> letters;
        for(int i=0; i<length; i++){
            if(letters[i] == 'U')
                letters[i] = 'D';
            else if(letters[i] == 'L'){
                letters[i] = 'L';
                letters[i+1] = 'R';
                continue;
            }
            else if(letters[i] == 'D')
                letters[i] = 'U';
        }
        cout << letters << '\n';
    }
}
