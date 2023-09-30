#include<bits/stdc++.h>
using namespace std;
template<typename T>

class StackusingArray {
    //not changing nextIndex and capacity since they will be integer values
    T *data;
    int nextIndex;
    int capacity;

    public:
    StackusingArray() {
        // 4 is jsut an example size
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }


    int size() {
        return nextIndex;
    }

    bool isEmpty() {
        return nextIndex == 0;
    }

    void push(T element) {
        if(nextIndex == capacity) {
            T *newData = new T[2 * capacity];
            for(int i = 0; i < capacity; i++) {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;;
            data = newData;
        }
        data[nextIndex++] = element; 
    }

    // changed return type of pop and top as they are the returning the 'T' type of data
    T pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[--nextIndex];
    }

    T top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }

        return data[nextIndex - 1];
    }
};