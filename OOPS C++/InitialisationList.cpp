#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int age;
    const int rollno;
    int &x; //  age reference variable

    Student(int r, int age) : rollno(r), age(age), x(this -> age) {
        // using this -> age in x as "x" is a refernce variable for age and it is already present in the parameters 
        //so to distinguish it
    }
   
};

int main() {
    Student s1(101, 20);
}