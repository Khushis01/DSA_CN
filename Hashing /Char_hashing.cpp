#include<bits/stdc++.h>
using namespace std;

/*
abcdefgh
5
a
b
d
r
g
*/

int main() {
    string s;
    cin >> s;

    //pre compute
    // subtracting 'a' as we are using ASCII values so 'a' = 97 and 'z' = 122
    //we subtract 'a' from string to assign each character to index in the array 
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;

        //fetch
        cout << hash[c - 'a'] << endl << endl;
    }
}