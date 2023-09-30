#include<bits/stdc++.h>
using namespace std;

template<typename T>
class QueueArray{
    T *data;
    int nextindex;
    int firstindex;
    int size;
    int capacity;

    public:
    QueueArray(int s) {
        data = new T[s];
        nextindex = 0;
        firstindex = -1;
        size = 0;
        capacity = s;
    }

    int getsize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(T ele) {
        if(size == capacity) {
            cout << "Queue Full !" << endl;
            return;
        }
        data[nextindex] = ele;
        nextindex = (nextindex + 1) % capacity;
        if(firstindex == -1) {
            firstindex = 0;
        }
        size++;
    }

    T front() {
        if(isEmpty()) {
            cout << "Queue is Emplty !" << endl;
            return 0;
        }
        return data[firstindex];
    }

    T dequeue() {
        if(isEmpty()) {
            cout << "Queue is Emplty!" << endl;
            return 0;
        }

        T ans = data[firstindex];
        firstindex = (firstindex + 1) % capacity;
        size--;
        if(size == 0) {
            firstindex = -1;
            nextindex = 0;
        }
        return ans;
    }

};