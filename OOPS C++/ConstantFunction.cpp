#include<bits/stdc++.h>
using namespace std;

class Fraction {
    int numerator;
    int denominator;

    public:
    Fraction() {}
    Fraction(int numerator, int denominator) {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }

    int getNum() const{
        return numerator;
    }

    int getDen() const{
        return denominator;
    }

    void setNumerator(int n) {
        numerator = n;
    }

    void setDenominator(int d) {
        denominator = d;
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

    void add(const Fraction &f2) {
        int lcm = this -> denominator * f2.denominator;
        int x = this -> numerator * f2.denominator;
        int y = f2.numerator * this -> denominator;
        int num = x + y;

        this -> numerator = num;
        this -> denominator = lcm;
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

    const Fraction f3;
    //f3 is constant so we cant call any function through it
    //cout << f3.getDenominator() << " " << f3.numerator <<  endl;

    //this is okay since we have made these constant functions
    cout << f3.getDen() << " " << f3.getNum() <<  endl;
}