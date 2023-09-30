/*
For a given a string expression containing only round brackets or parentheses, check if they are balanced or not. Brackets are said to be balanced if the bracket which opens last, closes first.
(()()())
()()(()
*/

#include<stack>
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string expression) {
    stack<char> result;

    for(int i = 0; i < expression.size(); i++) {
        if(expression[i] == '(') {
            result.push(expression[i]);
            continue;
        }

        else if(expression[i] == ')') {
            if(result.empty()) {
                return false;
            }

            char top = result.top();
            result.pop();

            if(expression[i] == ')' && top == '(') {
                continue;
            }
            else {
                return false;
            }
        }
    }

    return result.empty();
}

int main() {
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}