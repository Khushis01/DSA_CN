#include <iostream>
#include <string>
using namespace std;

string removeConsecutiveDuplicates(string str) {
    string result;
    char prevChar = '\0';
    for (char ch : str) {
        if (ch != prevChar) {
            result.push_back(ch);
            prevChar = ch;
        }
    }

    return result;
}

int main() {
    
    string s;
    cin >> s;
    s = removeConsecutiveDuplicates(s);
    cout << s;
}