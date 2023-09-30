#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBracketReversals(string input) {
    if(input.length() % 2 != 0) {
        return -1;
    }

    stack<char>st;

    for(int i = 0; i < input.size(); i++) {
        char ch = input[i];

        if(ch == '{') {
            st.push(input[i]);
        }
        else {
            if(!st.empty() && st.top() == '{') {
                st.pop();
            }
            else {
                st.push(input[i]);
            }
        }
    }

    int count = 0;
    while(!st.empty()) {
        char c1 = st.top();
        st.pop();
        char c2 = st.top();
        st.pop();

        if(c1 != c2) {
            count += 2;
        }
        else {
            count += 1;
        }
    }

    return count;
}

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}