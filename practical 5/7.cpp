#include <bits/stdc++.h>
using namespace std;
class Fraction{
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator = 0, int denominator = 1){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        void setFraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        void displayFraction() const{
            cout << numerator << "/" << denominator;
        }
        friend bool operator&&(const Fraction &lhs, const Fraction &rhs){
            return lhs.numerator != 0 && rhs.numerator != 0;
        }
        ~Fraction(){
            cout << "Destructor called." << endl;
        }
};

int main(){
    Fraction frac1(3, 4);
    Fraction frac2(0, 8);

    cout << "Fraction 1: ";
    frac1.displayFraction();
    cout << endl;

    cout << "Fraction 2: ";
    frac2.displayFraction();
    cout << endl;

    bool isNonZero = frac1 && frac2;

    cout << "Neither fraction is zero? " << (isNonZero ? "true" : "false") << endl;

    return 0;
}