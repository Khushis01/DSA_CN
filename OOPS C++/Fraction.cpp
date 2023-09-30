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
        // using "this" is optional in this case
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

    // here in Fraction F2 we are basically creating a new block F2 and copying the values from main.f2
    // this is callying copy instructor
    // We can avoid this by passing values by reference also that to constant reference so that anyone can not change the value but read them
    void add(const Fraction &f2) {
        // here "this" represents the denominator of f1 fraction 
        int lcm = this -> denominator * f2.denominator;
        int x = this -> numerator * f2.denominator;
        int y = f2.numerator * this -> denominator;
        int num = x + y;

        //it is not simplified fraction
        this -> numerator = num;
        this -> denominator = lcm;

        //to simplyfy it we will find greatest comman factor and try to find the answer accordingly
        simplify();
    }

    void multiply(const Fraction &f2) {
        this -> numerator = this -> numerator * f2.numerator;
        this -> denominator = this -> denominator * f2. denominator;

        simplify();
    }

};

int main() {
    Fraction f1(10, 2);
    Fraction f2(15, 4);

    f1.print();
    f2.print();

    f1.add(f2);
    f1.print();
    f2.print();

    f1.multiply(f2);
    f1.print();
    f2.print();
}