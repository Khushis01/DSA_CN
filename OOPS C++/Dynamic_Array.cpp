#include<bits/stdc++.h>
using namespace std;

class DArray {
    int *data;
    int nextindex;
    int capacity;

    public:

    DArray() {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }

    DArray(DArray const &d) {
        this -> data = new int[d.capacity];
        for(int i = 0; i < d.nextindex; i++) {
            this -> data[i] = d.data[i];
        }
        this -> nextindex = d.nextindex;
        this -> capacity = d.capacity;
    }

    void operator=(DArray const &d) {
        this -> data = new int[d.capacity];
        for(int i = 0; i < d.nextindex; i++) {
            this -> data[i] = d.data[i];
        }
        this -> nextindex = d.nextindex;
        this -> capacity = d.capacity;
    }

    void add(int element) {
        if(nextindex == capacity) {
            int *newData = new int[2 * capacity];
            for(int i = 0; i < capacity; i++) {
                newData[i] = data[i];
            }

            delete[] data;
            data = newData;
            capacity *= 2;
        }

        data[nextindex] = element;
        nextindex++;
    }

    int get(int i) const{
        if(i < nextindex) {
            return data[i];
        }
        else {
            return -1;
        }
    }

    void add(int i, int element) {
        if(i < nextindex) {
            data[i] = element;
        }

        else if(i == nextindex) {
            add(element);
        }

        else {
            return;
        }
    }

    void print() const{
        for(int i = 0; i< nextindex; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

};

int main() {
    DArray d;

    d.add(10);
    d.add(20);
    d.add(30);
    d.add(40); 
    d.add(50);
    d.add(60);
    d.print();

    DArray d3;
    d3 = d;

    DArray d2(d);
    d.add(0, 100);
    d2.print();
    d3.print();
    d.print();




}