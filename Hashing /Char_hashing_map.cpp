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

    map<char, int>mpp;
    for(int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }


    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;

        //fetch
        cout << mpp[c] << endl << endl;
    }
}