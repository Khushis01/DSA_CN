#include<bits/stdc++.h>
using namespace std;

void removeAllOccurrencesOfChar(string input, char c) {
// both are correct
    
    for(char ch: input) {
        if(ch != c) {
            cout << ch;
        }
    }

/*
    for(int i = 0; i < input.size(); i++) {
        if(input[i] != c) {
            cout << input[i];
        }
    }
*/
}


int main(){
    string a;
    cin>>a;
    char c;
    cin>>c;
    removeAllOccurrencesOfChar(a,c);
}