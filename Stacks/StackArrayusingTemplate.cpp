#include<bits/stdc++.h>
#include "STACK_TEMPLATE.cpp"
using namespace std;

int main (){
    // s is in integer type
    StackusingArray <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(90);

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.size() << endl;
    cout << s.isEmpty() << endl; 

    StackusingArray <char> s2;
    s2.push(97);
    s2.push(98);
    s2.push(99);
    s2.push(100);
    s2.push(101);
    s2.push(102);
    s2.push(103);

    cout << s2.top() << endl;

    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;

    cout << s2.size() << endl;
    cout << s2.isEmpty() << endl; 

}