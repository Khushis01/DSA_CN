#include<bits/stdc++.h>
using namespace std;

class StackusingArray {
    int *data;
    int nextIndex;
    int capacity;

    public:
    /*
    //statically creating data with size
    StackusingArray(int totalSize) {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    */

   //Dynamically as we don't need users size of data array -> will be used in push function
    StackusingArray() {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }


    int size() {
        return nextIndex;
    }

    bool isEmpty() {
        return nextIndex == 0;
    }

    /*
    //Here we are checking if the size is full, basically this is Static 
    void push(int element) {
        if(nextIndex == capacity) {
            cout << "Stack full" << endl;
            return;
        }
        data[nextIndex++] = element; 
    }
    */

   //Dynamically creating new array and where the size is double and we dont have any constraint of size to push elements
    void push(int element) {
        if(nextIndex == capacity) {
            int *newData = new int[2 * capacity];
            for(int i = 0; i < capacity; i++) {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;;
            data = newData;
        }
        data[nextIndex++] = element; 
    }

    int pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[--nextIndex];
    }

    int top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }

        return data[nextIndex - 1];
    }
};