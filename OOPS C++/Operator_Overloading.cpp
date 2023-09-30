#include<bits/stdc++.h>
using namespace std;

class Fraction {
    int numerator;
    int denominator;

    public:

    Fraction(int numerator, int denominator) {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    void print() {
        cout << this -> numerator << " / " << this -> denominator << endl;
    }

    void simplify() {
        int gcd = 1;
        int j = min(this -> numerator, this -> denominator);
        for(int i = 1; i <= j; i++) {
            if(this -> numerator % i == 0 && this -> denominator % i == 0) {
                gcd = i;
            }
        }

        this -> numerator /= gcd;
        this -> denominator /= gcd;
    }

    Fraction add(const Fraction &f2) {
        int lcm = denominator * f2.denominator;
        int x = numerator * f2.denominator;
        int y = f2.numerator * denominator;
        int num = x + y;

        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    void multiply(const Fraction &f2) {
        this -> numerator = this -> numerator * f2.numerator;
        this -> denominator = this -> denominator * f2. denominator;

        simplify();
    }

    // const function since we are not manipulating current values instead we are using these values and creating new object.
    Fraction operator+(const Fraction &f2) const {
        int lcm = denominator * f2.denominator;
        int x = numerator * f2.denominator;
        int y = f2.numerator * denominator;
        int num = x + y;

        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    // const function since we are not manipulating current values instead we are using these values and creating new object.
    Fraction operator*(const Fraction &f2) const{
        int n = this -> numerator * f2.numerator;
        int d = this -> denominator * f2. denominator;
        Fraction fnew(n, d);
        fnew.simplify();
        return fnew;
    }


    // Pre increment operator
    /*
    void operator++() {
        numerator = numerator + denominator;
        simplify();
    }
    */

    //this is basiclly like copy constructor where we are copying the 
    //the value of f1 in f3 using operator overloading
    Fraction& operator++() {
    // "&" returning by reference meaning it will not create copy of elements
    //insteas change in the same blocking
    //++(++i) will be changed in both f1 and f3 then otherwise it will be only copied in f3 and f1 will not be changed    
        numerator = numerator + denominator;
        simplify();

        // "*this" is returing the whole content
        return *this;
    }


    //post- increment operator
};

int main() {
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    Fraction f5 = f1 * f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();

/*
// this is the void operator overloading where we are not returning
    cout << endl << endl;
    f1.print();
    ++f1;
    f1.print();
*/

    cout << endl << endl;
    f1.print(); 
    Fraction f6 = ++f1;
    f6.print();
}