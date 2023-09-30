#include<bits/stdc++.h>
using namespace std;

class Student {
    int age;

    public:
    char * name;
    void display() {
        cout << name << " " << age << endl;
    }

    Student(int age, char *name) {
        this -> age = age;

        //Shallow copy
        //this -> name = name;

        //Deep copy
        this -> name = new char(strlen(name) + 1);
        strcpy(this -> name, name);
    }

    //Copy constructor, pass by value, it forms an infinite loop
    /*
    Student(Student s) {
        this -> age = s.age;

        //Shallow copy
        this -> name = s.name;

        //Deep copy
        this -> name = new char(strlen(name) + 1);
        strcpy(this -> name, s.name);
    }
    */ 

    //Copy constructor, pass by reference
    Student(Student const &s) {
        this -> age = s.age;

        //Shallow copy
        //this -> name = s.name;

        //Deep copy
        this -> name = new char(strlen(name) + 1);
        strcpy(this -> name, s.name);
    }

};

int main() {

    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    Student s2(s1);
    s2.name[0] = 'x';

    s1.display();
    s2.display();
}