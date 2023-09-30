
#include <iostream>
#include <stack>
using namespace std;
#include<stack>

void calculateSpan(int prices[], int n, int output[]) {
    stack<int>st; 
    output[0] = 1;
    st.push(0);

    for(int i = 0; i < n; i++) {

    }
    /*
    stack<int> input;
    stack<int> extra;

    for(int i = 0; i < n; i++) {
        input.push(prices[i]);
    }

    int i = 0;
    while(!input.empty()) {
        int count = 1;
        int first = input.top();
        input.pop();

        while(input.top() <= first && !input.empty()) {
            extra.push(input.top());
            input.pop();
            count++;
        }

        output[i++] = count;

        while(!extra.empty()) {
            input.push(extra.top());
            extra.pop();
        }
    }
    */
}


int main() {
    int n;
    cin >> n;

    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int* spans = new int[n];
    calculateSpan(prices, n, spans);

    for (int i = 0; i < n; i++)
        cout << spans[i] << " ";

    delete[] prices;
    delete[] spans;

    return 0;
}